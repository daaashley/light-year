#include <iostream>
#include <map>

int main()
{
    int a = 10;
    int b = 20;

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b; // gives '0' because it can only return ints
 
    std::cout << f << std::endl;
}