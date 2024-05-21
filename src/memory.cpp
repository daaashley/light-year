#include <vector>
#include <iostream>

void heap()
{
    int x = 5;               // x is created on the stack
    int *heapX = new int{5}; // an int variable with value 5 is created on the heap, then addr is stored in the stack variable x
}

void array()
{
    int intArray[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(intArray) / sizeof(int); i++)
    {
        std::cout << intArray[i] << std::endl;
    }
}

int main()
{
    heap();
    array();
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