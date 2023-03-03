#include <iostream>
#include <vector>

#include "QS.h"

// You don't need to worry about the code in this function (unless you want to
// read and learn from it). All you *need* to know is that it allows you to
// print vectors to cout
std::ostream &operator<<(std::ostream &os, const std::vector<int> &array) {
    bool print_space = false;
    for (int elem: array) {
        if (print_space) {
            os << ' ';
        }
        print_space = true;
        os << elem;
    }
    return os;
}

int main() {
    std::vector<int> array;
    QS sorter;

    // Write your tests here. To see what the vector looks like, you can print
    // it to cout like this:
    //
    // std::cout << array;

    return 0;
}
