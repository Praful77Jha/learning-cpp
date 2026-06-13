// testing arithmatic operations using value-returning functions

#include <iostream>
int getvaluefromuser(){
    int input{};
    std::cout<<"Enter the integer: ";
    std::cin>>input;
    return input;
}
int main(){
int x{getvaluefromuser()};
int y{getvaluefromuser()};
    std::cout << x << "+" << y << " is: " << x+y<<".\n";
    std::cout << x << "-" << y << " is: " << x-y<<".\n";
    std::cout << x << "*" << y << " is: " << x*y<<".\n";
    std::cout << x << "/" << y << " is: " << x/y<<".\n";
    return 0;

}