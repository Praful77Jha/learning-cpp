// testing BMI Calculator - weight, height, float variables, arithmetic operators
#include <iostream>
int main(){
    float x;
    float y;
    float BMI;
    std::cout<< "Enter the Weight(In Kg): ";
    std::cin>>x;
    std::cout<<"Enter the Height(In Meters): ";
    std::cin>>y;

    // Calculating BMI using Arithmetic Operators
    BMI =  x/ (y * y);
    std::cout << "The BMI is: " <<BMI;
}
