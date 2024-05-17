#include <vector>
#include "utility.h"

int main()
{
    std::vector<int> randomNums = generateRandomNumbers(20);
    sortVector(randomNums);
    printVector(randomNums);
}