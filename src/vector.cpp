#include <iostream> //std library by committee
#include <iomanip>
#include <vector>
// int main()
// {
//     std::string msg = "hello steve"; // Creates string variable
//     int age = 2024;
//     float temperature = 72.5123412341234;
//     double doubleSizedFloat = 72.5123412341234;
//     char characterA = 'A';
//     char charactera = 'a'; // 1 letter only

//     bool lightIsOn = true;

//     std::cout << msg << age << "temp is " << temperature << std::endl; // end line
//     std::cout << msg << std::endl;                                     // end line
//     std::cout << msg << std::endl;                                     // end line
//     std::cout << msg << std::endl;                                     // end line

//     // 1gb is 1024 mb
//     // 1 mb is 1024 kb
//     // 1 kb is 1024 bytes
//     // 1 byte is 8 bits
//     // 1 bit is 1 bit that is either 0 or 1
//     std::cout << "The size of int is: " << sizeof(int) << std::endl;
//     std::cout << "The size of float is: " << sizeof(float) << std::endl;
//     std::cout << "The size of char is: " << sizeof(char) << std::endl;
//     std::cout << "The size of bool is: " << sizeof(bool) << std::endl;
//     std::cout << std::setprecision(15) << doubleSizedFloat << std::endl; // precision only supports 7 digits for float
// }

int main()
{
    std::string employees[] = {"steve",
                               "bob",
                               "allen"}; // declares an array
    std::cout << employees[0] << std::endl;

    employees[1] = "Adam";

    std::cout << employees[1] << std::endl;
    std::cout << sizeof(employees) / sizeof(std::string) << std::endl;

    int IDs[] = {1234, 1235, 1236};

    // Vector can grow and shrink
    // {...} is an initializer list
    std::vector<int> IDVec = {123, 124, 125};

    std::cout
        << IDVec[0] << std::endl;
    std::cout << IDVec.back() << std::endl;  // nice, last element
    std::cout << IDVec.front() << std::endl; // first

    std::cout << "The size of idvec : " << IDVec.size() << std::endl;
    // grow
    IDVec.push_back(1234);
    // insert
    IDVec.insert(IDVec.begin(), 1134); // begin is an iterator
    std::cout << "the first one of IDVec is: " << IDVec.front() << std::endl;

    // remove
    IDVec.erase(IDVec.begin());
    std::cout << "the first one of IDVec is: " << IDVec.front() << std::endl;

    // try to see what else the vectore type can do.
}
