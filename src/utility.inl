#pragma once

#include <vector>

// Template functions should be defined in header file
template <typename T>
void printVector(const std::vector<T> &vectorToPrint)
{
    for (T element : vectorToPrint)
    {
        std::cout << element << " ";
    }
}