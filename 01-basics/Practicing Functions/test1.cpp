// testing doubling of entered integer using value-returning functions
#include <iostream>
int getValueFromUser(){
    int input{};
    std::cout<<"Enter the integer: ";
    std::cin>>input;
    return input;
}
int main(){
    int num{getValueFromUser()};
    
    std::cout<<"Double is: "<<num*2;
    return 0;
}