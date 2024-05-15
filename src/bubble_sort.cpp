#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <limits>
#include <sstream>
#include <random>
#include <chrono>

// Pass by refrence with &
std::vector<int> sortVector(std::vector<int> vectorToSort)
{
    for (int i = 0; i < vectorToSort.size(); ++i)
    {
        for (int j = i + 1; j < vectorToSort.size(); ++j)
        {
            if (vectorToSort[i] > vectorToSort[j])
            {
                std::swap(vectorToSort[i], vectorToSort[j]);
            }
        }
    }
    return vectorToSort;
}

int main()
{
    // Given a sequence of numbers, find the smallest one.
    std::vector<int> randomNumbers;
    int size = 100000;
    std::srand(std::time(nullptr));

    for (int i = 0; i < size; i++)
    {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        // std::cout << number << " ";
    }

    // SORTING

    // Reorder the number from the smallest to the biggest.
    auto t_start = std::chrono::high_resolution_clock::now();
    sortVector(randomNumbers);
    auto t_end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for " << size << " numbers: " << std::chrono::duration<double, std::milli>(t_end - t_start).count() / 1000 << " seconds." << std::endl;

    // for (int num : randomNumbers)
    // {
    //     std::cout << num << " ";
    // }
}