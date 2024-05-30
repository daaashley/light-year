#include <vector>
#include <memory>
#include <iostream>

class Student
{
public:                                                                     // anything under public is accessible from the outside
    Student(const std::string &studentName, int studentID, int studentYear) // Constructor is func w no return type and same name as class.
    // : name{studentName}, ID{studentID}, year{studentYear} is another way, more performant
    {
        name = studentName;
        ID = studentID;
        year = studentYear;
        // empty constructor is default constructor
    }

    Student(const char *rawStringName, int studentID, int studentYear)
        : name{rawStringName}, ID{studentID}, year{studentYear}
    {
    }

    ~Student() // Called when object is out of scope or deleted if alloc'ed on the heap
    {
        // delete or free heap params/vars
        std::cout << "student " << name << " is destructed" << std::endl;
    }

    void sayHello()
    {
        std::cout << name << " says hello" << std::endl;
    }

    // Member variables
    std::string name;
    int ID;
    int year;

private:
    int secret;
};

int main()
{
    Student studentOne{"Sam", 1234, 1};

    Student studentTwo{"Sam", 1234, 1};
    studentTwo.name = "Emily";
    studentTwo.ID = 0002;
    studentTwo.year = 2;

    std::vector<Student> students = {studentOne,
                                     studentTwo};

    for (Student &student : students)
    {
        std::cout << "Student name: " << student.name << std::endl;
        std::cout << "Student ID: " << student.ID << std::endl;
    }
}