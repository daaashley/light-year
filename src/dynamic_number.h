#pragma once

template <typename T>
class DynamicNumber
{
public:
    DynamicNumber() : ptr{new T{}}
    {
    }
    // Big Five
    ~DynamicNumber()
    {
        delete ptr;
    }

    // one param con
    explicit DynamicNumber(const T &other)
        : ptr{new T{other}}
    {
    }
    // Copy Con - deep copy
    DynamicNumber(const DynamicNumber<T> &other)
        : ptr{new T{other.GetValue()}}
    {
    }

    // Move Con = shallow copy
    DynamicNumber(DynamicNumber &&other)
        : ptr{other.ptr} // transfer ownership
    {
        other.ptr = nullptr;
    }

    // Copy Assignment Op
    DynamicNumber &operator=(const DynamicNumber &other)
    {
        if (*this == other) // self assign check
            return *this;
        *ptr = other.GetValue();

        return *this;
    }

    // Move Assignment Op
    DynamicNumber &operator=(DynamicNumber &&other)
    {
        if (*this == other)
            return *this;
        delete ptr;
        ptr = other.ptr;
        other.ptr = nullptr;
    }

    // == operator for soft check guard
    bool operator==(const DynamicNumber &other) const
    {
        if (ptr == other.ptr)
            return true;
        if (GetValue() == other.GetValue())
            return true;
        return false;
    }

    T GetValue() const
    {
        return *ptr;
    }

private:
    T *ptr;
};