// testing Declaring diff variables using cin & cout
#include <iostream>

int main(){
    int x;
    char y;
    double z;
    float w;

    std::cout << "Enter the Value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    std::cout << "Enter the value of z: ";
    std::cin >> z;

    std::cout << "Enter the value of W: ";
    std::cin >> w;
    

    std::cout << "\nYou entered:\n";
    std::cout << "x: " << x << ", y: " << y << ", z: " << z << ", w: " << w << "\n";
}
