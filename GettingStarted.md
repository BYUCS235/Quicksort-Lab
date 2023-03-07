# quicksort
In this tutorial we will help you to get started on the quicksort lab.  In this lab you will not be able to use a lot of the book code, so this tutorial will mostly show you examples of how to implement each step of the lab.  You should make sure that all of the code you submit is your own.

First download the lab files.  They are in this git repository.  Then create "QS.h" that inherits from "QSInterface.h" and "QS.cpp" that implements the functions.  Make sure that your code compiles.

Now implement 
```c++
	/*
	* medianOfThree()
	*
	* The median of three pivot selection has two parts:
	*
	* 1) Calculates the middle index by averaging the given left and right indices:
	*
	* middle = (left + right)/2
	*
	* 2) Then bubble-sorts the values at the left, middle, and right indices.
	*
	* After this method is called, data[left] <= data[middle] <= data[right].
	* The middle index will be returned.
	*
        * You may choose to throw an exception if the inputs are invalid.
        *
	* @param left
	* 		the left boundary for the subarray from which to find a pivot
	* @param right
	* 		the right boundary for the subarray from which to find a pivot
	* @return
	*		the index of the pivot (middle index)
	*/
	virtual size_t medianOfThree(vector<int> &array, size_t left, size_t right) = 0;
```
You will be calling this function before you partition your data, so make sure you have it right.  It should return the index of the pivot value.  You can perform the bubble sort on three elements by simple if statements.  For example, assume that you have the array
```
44,75,23,43,55,12,64,77,33
left = 0, right = 8
middle = (left+right)/2 = 4
now sort the values 44,55,33 to get 
33,75,23,43,44,12,64,77,55
and return the middle index 4
```
The lab mentions that you should follow the algorithm on page 611.
![book page](https://mjcleme.github.io/page611.png )
Now implement
```c++
	/*
	* Partitions a subarray around a pivot value selected according to
	* median-of-three pivot selection.  Because there are multiple ways to partition a list,
	* we will follow the algorithm on page 611 of the course text when testing this function.
	*
	* The values which are smaller than the pivot should be placed to the left
	* of the pivot; the values which are larger than the pivot should be placed
	* to the right of the pivot.
	*
	* @param left
	* 		the left boundary for the subarray to partition
	* @param right
	* 		the right boundary for the subarray to partition
	* @param pivotIndex
	* 		the index of the pivot in the subarray
	* @return
	*		the pivot's ending index after the partition completes
	*/
	virtual size_t partition(vector<int> &array, size_t left, size_t right, size_t pivotIndex) = 0;
```
So, given the data resulting from medianOfThree():
```
33,75,23,43,44,12,64,77,55
left = 0, right = 8, pivotIndex = 4
```
You can now call
```
pivotEnd = partition(0, 8, 4);
```

Now you just need to implement
```c++
	/*
	* sort(vector<int> &array)
	*
	* Sorts elements of the array.  After this function is called, every
	* element in the array is less than or equal its successor.
	*
	*/
	virtual void sort(vector<int> &array) = 0;
```

You will probably want a private helper function that does the recursive sorting. The signature might look something like:

```c++
void _sort(vector<int> &array, size_t left, size_t right);
```

On a given range, the basic steps are:

- median of three (get the pivot)
- partition the data with the pivot
- sort the left and sort the right
