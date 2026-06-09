// testing initialization of two variables with using cin & cout

#include <iostream>
int main (){
    std::cout <<"Enter Two Numbers: ";
    int x{};
    std::cin >> x ;
    int y{};
    std::cin >> y;
    std::cout << "You Entered : " << x << " and "<< y << "\n";
    return 0;
}