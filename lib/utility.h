#pragma once
#include <iostream>
#include <vector>
#include "definition.h"

__declspec(dllexport) void sortVector(std::vector<int> &vectorToSort);

// Declaration
__declspec(dllexport) std::vector<int> generateRandomNumbers(int numberOfNumbers);

// Template functions should be defined in header file
template <typename T>
void printVector(const std::vector<T> &vectorToPrint);
#include "utility.inl" // Called inline because it is not in the head