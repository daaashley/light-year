#include <vector>
#include <memory>
#include <iostream>

class Student
{
public: // anything under public is accessible from the outside
    std::string name;
    int ID;
    int year;

private:
    int secret;
};

int main()
{
    Student studentOne;
    studentOne.name = "Sam";
    studentOne.ID = 0001;
    studentOne.year = 1;

    Student studentTwo;
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