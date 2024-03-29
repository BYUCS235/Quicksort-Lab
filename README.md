# Quicksort Lab

## Briefing: 
In this lab, you will implement the quicksort algorithm described in the book. Although there are other ways of selecting the pivot value, you should follow the algorithm described in section 10.9 of the book.

## Purpose
The purpose of this lab is to implement quicksort.

## Background
Quicksort is a sorting algorithm developed by Tony Hoare that, on average, makes O(n log n) comparisons to sort n items. It is also known as partition-exchange sort. In the worst case, it makes O(n^2) comparisons, though this behavior is rare. Quicksort is typically faster in practice than other O(n log n) algorithms. Additionally, quicksort's sequential and localized memory references work well with a cache. Quicksort can be implemented as an in-place partitioning algorithm,

## Requirements
You will need the files from this git repository to complete the lab.

You will implement the functions found in `QSInterface.h`. Your `QS` class must inherit from `QSInterface.h`.

### Median of Three

Sort the first, middle, and last values of the provided partition. Return the position of the middle value.

### Partition

Given an array, the first position, last position, and the pivot position, partition the data. 
By the end of the partition function, all values smaller than the pivot should be on the left of the pivot value,
and all values larger than the pivot should be on the right of the pivot value.

You should follow the partitioning algorithm discussed in class (or in the material on Canvas).

### Sort

Use your `medianOfThree` and `partition` functions to recursively sort a vector. 

## Requirement Notes
* You cannot `#include <algorithm>` - you should implement the quicksort algorithm youself.

## Testing

You can compile and run the tests to generate the output files. Compare the output files to the provided key files to know if your solution is correct.

`scratch.cpp` is provided as a convenience for you. Use it to write your own test cases.
