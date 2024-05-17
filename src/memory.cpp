#include <vector>
#include <iostream>

int main()
{
    int x = 5;
    int &anotherx = x; // a reference.
    anotherx = 10;
    std::cout << x << std::endl;
    std::cout << anotherx << std::endl;

    int y = 5;
    int *xPtr = &x;
    *xPtr = 6; // de reference allows you to assign value
    std::cout << *xPtr << std::endl;
}