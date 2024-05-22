#include <vector>
#include <iostream>
#include <memory>

void sharedPointer()
{
    std::shared_ptr<int> intSharedPtr = std::make_shared<int>(5);

    // Does allow copy, The raw memory will be free, when and only when the last shared pointer that holds it is deleted.
    // std::shared_ptr<int> anotherSharedPtr = intSharedPtr;

    // If you want to manually clear the memory call

    // intSharedPtr.reset();

    // Weak ptr, empty init
    std::weak_ptr<int> emptyWeakPtr;

    // Shared ptr delete/reset cascades to weak_ptrs, and those allocations are clean up as well
    // Weak ptr, creates weak ptr with same mem addr of the intShared Ptr
    std::weak_ptr<int> intWeakPtr = intSharedPtr;

    intSharedPtr.reset();

    if (intWeakPtr.expired())
    {
        std::cout << "weak ptr expired" << std::endl;
    }
    else
    {
        std::cout << "weak ptr not expired" << std::endl;
    }
}

void smartPointer()
{
    // Unique ptr - usage similar to raw ptr, automatically deletes or free's memory out of scope
    std::unique_ptr<int> intUniquePtr = std::make_unique<int>(5);

    std::unique_ptr<int> anotherUniquePtr = std::move(intUniquePtr);

    std::cout << intUniquePtr << std::endl;
}

void heap()
{
    // "new" is heap
    int x = 5;               // x is created on the stack
    int *heapX = new int{5}; // an int variable with value 5 is created on the heap, then addr is stored in the stack variable x

    delete heapX;    // I do not need to use where this pointer points anymore
    heapX = nullptr; // This is saying heapX now does not point to anything

    // Memory access violation
    if (heapX != nullptr)
    {
        std::cout << *heapX << std::endl; // Hey nvm, I need it again
    }
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
    sharedPointer();
    smartPointer();
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