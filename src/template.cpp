#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <limits>
#include <sstream>
#include <random>
#include <chrono>

template <typename T>
void printMsg(T msg, bool newLine)
{
    std::cout << msg;
    if (newLine)
    {
        std::cout << std::endl;
    }
}

int main()
{
    printMsg<std::string>("Hello", true);
    printMsg<int>(21, false);
    printMsg<char>('A', true);
    printMsg<float>(1.5, true);
}