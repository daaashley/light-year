#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <limits>
#include <sstream>
#include <random>
#include <chrono>

int partition(std::vector<int> &arr, int left, int right)
{
    int i = left;
    int j = right - 1;
    int pivot = arr[right];

    while (i < j)
    {
        while (i < right && arr[i] < pivot)
        {
            i += 1;
        }
        while (j > left and arr[j] >= pivot)
        {
            j -= 1;
        }
        if (i < j)
        {
            std::swap(arr[i], arr[j]);
        }
    }
    if (arr[i] > pivot)
    {
        std::swap(arr[i], arr[right]);
    }
    return i;
}

void quickSort(std::vector<int> &vectorToSort, int left, int right)
{
    if (left < right)
    {
        int partition_pos = partition(vectorToSort, left, right);
        quickSort(vectorToSort, left, partition_pos - 1);
        quickSort(vectorToSort, partition_pos + 1, right);
    }
}

// Pass by refrence with &
void sortVector(std::vector<int> &vectorToSort)
{
    return quickSort(vectorToSort, 0, vectorToSort.size() - 1);
}

// const means we are not changing, since this is read only print
// const enforces non-mutation
template <typename T>
void printVector(const std::vector<T> &vectorToPrint)
{
    for (T element : vectorToPrint)
    {
        std::cout << element << " ";
    }
}

// String types with " " space

template <typename T>
T sum(T t)
{
    return t;
}

template <typename ArgOne, typename... Others> //... is varying amount of template args
ArgOne sum(ArgOne argOne, Others... others)
{
    return argOne + sum(others...); // ... is unpacking here // final 'sum' has one arg and will call T generic sum above
}

std::string sum(std::string t)
{
    return t;
}

template <typename... Others> //... is varying amount of template args
std::string sum(std::string argOne, Others... others)
{
    return argOne + " " + sum(others...); // ... is unpacking here // final 'sum' has one arg and will call T generic sum above
}

std::vector<int> generateRandomNumbers(int numberOfNumbers)
{
    std::vector<int> randomNumbers;
    std::srand(std::time(nullptr));

    for (int i = 0; i < numberOfNumbers; i++)
    {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        // std::cout << number << " ";
    }
    return randomNumbers;
}
