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

    int *xPtr2 = &y;
    int *xPtr3 = &x;
    int **xPtr4 = &xPtr;
    std::cout << *(int *)xPtr2 << std::endl;              // raw casting
    std::cout << *static_cast<int *>(xPtr3) << std::endl; // ensures type is correct
}