#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

int main()
{
    std::vector<std::string> names;
    std::vector<int> ids;

    // Above cannot mix types

    std::map<std::string, int> IDs{{"Steve", 1234}, {"Adam", 1223}, {"Ada", 1333}};

    std::cout << IDs["Steve"] << std::endl;

    IDs.insert({"Leon", 1644});

    std::cout << IDs["Leon"] << std::endl;

    IDs.erase("Leon");

    std::cout << "the size of IDs is: " << IDs.size() << std::endl;

    std::cout << IDs["Leon"] << std::endl; // If leon doesn't exist it will insert it

    std::cout << "size: " << IDs.size() << std::endl;

    std::cout << IDs["Leon"] << std::endl;

    IDs.clear(); // Will remove everything

    bool Exists = IDs.find("Leon") != IDs.end(); // Retruns an iterator
    std::cout << Exists << std::endl;
}