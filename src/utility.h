#pragma once
#include <iostream>
#include <vector>

void sortVector(std::vector<int> &vectorToSort);

// Declaration
std::vector<int> generateRandomNumbers(int numberOfNumbers);

// Template functions should be defined in header file
template <typename T>
void printVector(const std::vector<T> &vectorToPrint)
{
    for (T element : vectorToPrint)
    {
        std::cout << element << " ";
    }
}