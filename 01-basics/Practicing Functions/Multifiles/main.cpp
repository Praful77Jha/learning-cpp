#include <iostream>

int add(int x, int y); // forward declaration

int main()
{
    std::cout << "The sum of 10 and 20 is: " << add(10, 20) << "\n";
    return 0;
}