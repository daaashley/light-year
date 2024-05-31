#include "inheritance.h"
#include <iostream>

IntContainer::IntContainer()
    : intPtr{new int{0}}
{
}

IntContainer::IntContainer(const IntContainer &other) // Copy constructor
    : intPtr{new int{other.GetValue()}}               // a deep copy
{
    std::cout << "copy con ";
}

// && Converts value to rvalue
IntContainer::IntContainer(IntContainer &&other) noexcept // Move constructor
    : intPtr{other.intPtr}                                // shallow copy
{
    std::cout << "move con";
    other.intPtr = nullptr; // The other one no longer owns the ptr.
}

IntContainer::~IntContainer()
{
    std::cout << "destructed" << std::endl;
    delete intPtr; // frees the memory
}

IntContainer &IntContainer::operator=(const IntContainer &rhs) // Copy assignment operator
{
    std::cout << "copy assignment" << std::endl;
    if (*this == rhs)
        return *this;
    // Deep copy
    *intPtr = rhs.GetValue();

    return *this; // Pointer to current object
}

bool IntContainer::operator==(const IntContainer &other) // defines what happens when a == b
{
    if (intPtr == other.intPtr)
        return true;
    if (GetValue() == other.GetValue())
        return true;
    return false;
}

void IntContainer::setValue(int newValue)
{
    *intPtr = newValue;
}

int IntContainer::GetValue() const
{
    if (intPtr)
        return *intPtr;

    return 0;
}

IntContainer::IntContainer(int value)
    : intPtr{new int{value}} // Allocing heap mem
{
    std::cout << "one param constructor" << std::endl;
}

IntContainer ConstructorDynaInt(int val)
{
    IntContainer dInt{val};
    return dInt;
}

int main()
{
    std::cout << "main" << std::endl;
    // Two copies of intCont will try to free same heap twice, error
    // IntContainer intCOne = 20;
    // IntContainer intCTwo = intCOne; // default assignment copies all the values
    // An r value is a temp value, about to be destroyed
    IntContainer intCOne = ConstructorDynaInt(20); // An rvalue
    IntContainer intCTwo = ConstructorDynaInt(21);

    intCOne = intCTwo;
    // IntContainer intCThree = std::move(intCTwo); // made intCTwo an rvalue. uses Move Constructor
    std::cout
        << intCOne.GetValue() << std::endl;

    // Use the move constructor to move values, transfer of ownership
}