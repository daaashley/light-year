#include <iostream> //std library by committee
#include <iomanip>

int main()
{
    std::string msg = "hello steve"; // Creates string variable
    int age = 2024;
    float temperature = 72.5123412341234;
    double doubleSizedFloat = 72.5123412341234;
    char characterA = 'A';
    char charactera = 'a'; // 1 letter only

    bool lightIsOn = true;

    std::cout << msg << age << "temp is " << temperature << std::endl; // end line
    std::cout << msg << std::endl;                                     // end line
    std::cout << msg << std::endl;                                     // end line
    std::cout << msg << std::endl;                                     // end line

    // 1gb is 1024 mb
    // 1 mb is 1024 kb
    // 1 kb is 1024 bytes
    // 1 byte is 8 bits
    // 1 bit is 1 bit that is either 0 or 1
    std::cout << "The size of int is: " << sizeof(int) << std::endl;
    std::cout << "The size of float is: " << sizeof(float) << std::endl;
    std::cout << "The size of char is: " << sizeof(char) << std::endl;
    std::cout << "The size of bool is: " << sizeof(bool) << std::endl;
    std::cout << std::setprecision(15) << doubleSizedFloat << std::endl; // precision only supports 7 digits for float
}
