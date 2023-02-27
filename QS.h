#pragma once

#include <cstddef>
#include <vector>

#include "QSInterface.h"

class QS : public QSInterface {
public:
    QS() {}

    virtual ~QS() = default;

    void sort(std::vector<int> &array) override {
        // implement sort here
    }

    size_t medianOfThree(std::vector<int> &array, size_t left, size_t right) override {
        // implement medianOfThree here
    }

    size_t partition(std::vector<int> &array, size_t left, size_t right, size_t pivotIndex) override {
        // implement partition here
    }
};
