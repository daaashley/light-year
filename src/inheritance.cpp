#include <vector>
#include <memory>
#include <iostream>

class IntContainer
{
public:
    IntContainer()
        : intPtr{new int{0}}
    {
    }

    IntContainer(const IntContainer &other) // Copy constructor
        : intPtr{new int{other.GetValue()}} // a deep copy
    {
        std::cout << "copy con ";
    }

    // && Converts value to rvalue
    IntContainer(IntContainer &&other) noexcept // Move constructor
        : intPtr{other.intPtr}                  // shallow copy
    {
        std::cout << "move con";
        other.intPtr = nullptr; // The other one no longer owns the ptr.
    }

    IntContainer(int value)
        : intPtr{new int{value}} // Allocing heap mem
    {
        std::cout << "one param constructor" << std::endl;
    }

    void setValue(int newValue)
    {
        *intPtr = newValue;
    }

    int GetValue() const
    {
        if (intPtr)
            return *intPtr;

        return 0;
    }

    ~IntContainer()
    {
        std::cout << "destructed" << std::endl;
        delete intPtr; // frees the memory
    }

private:
    int *intPtr;
};

class Vehicle // It is an abstract concept, if there is 1 pure virtual func, the class becomes abstract
{
public:
    Vehicle(const std::string &vehicleName, int vehicleCapacity)
        : name{vehicleName}, capacity{vehicleCapacity} {}

    // A pure virtual function, meaning the class is abstract
    virtual void Run() = 0; // Virtual means the child can override it

    int GetCapacity() const
    {
        return capacity;
    }
    void SetCapacity(int newCapacity)
    {
        if (newCapacity < 0)
            return;

        capacity = newCapacity;
    }

protected:            // Use with caution
    std::string name; // weak protection

private: // Strong protection, even child class does not have access
    // std::string name; // and _ in front of member indicates private
    int capacity;
};

class Car : public Vehicle // Car is inheriting from vehicle
{
public:
    Car(const std::string &carName, int carCapacity, float carMileage)
        : Vehicle{carName, carCapacity}, mileage{carMileage}
    {
    }

    float GetMileage() const { return mileage; } // Getter
    void Run() override                          // Need override for the virtual parent method
    {
        std::cout << name << " with " << mileage << " mileage and " << GetCapacity() << " people running" << std::endl;
    }

private:
    float mileage;
};

IntContainer ConstructorDynaInt(int val)
{
    IntContainer dInt{val};
    return dInt;
}

int main()
{
    // Vehicle vehicle{"LightYears2000", 1000}; Abstract class not allowed to create instances
    // vehicle.Run();

    Car car{"Toyota Rav4", 5, 106123};
    Vehicle *carAsVehicle = &car; // you can hold a reference of the child with a variable of the parent
    car.Run();
    // Polymorphism, uses a v table to find the correct function call
    carAsVehicle->Run(); // If you are calling a func on a pointer you must use the arrow
    std::cout << car.GetMileage() << std::endl;

    // Two copies of intCont will try to free same heap twice, error
    // IntContainer intCOne = 20;
    // IntContainer intCTwo = intCOne; // default assignment copies all the values
    // An r value is a temp value, about to be destroyed
    IntContainer intCOne = ConstructorDynaInt(20); // An rvalue
    IntContainer intCTwo = ConstructorDynaInt(20);

    IntContainer intCThree = std::move(intCTwo); // made intCTwo an rvalue.
    std::cout << intCOne.GetValue() << std::endl;

    // Use the move constructor to move values, transfer of ownership
}