#pragma once

#include <cstddef>
#include <vector>

/*
* WARNING: You may not modify any part of this document
*/

class QSInterface {
public:
    QSInterface() {}

    virtual ~QSInterface() = default;

    virtual void sort(std::vector<int> &array) = 0;

    virtual size_t medianOfThree(std::vector<int> &array, size_t left, size_t right) = 0;

    virtual size_t partition(std::vector<int> &array, size_t left, size_t right, size_t pivotIndex) = 0;
};
