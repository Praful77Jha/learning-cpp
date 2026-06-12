// testing BMI Calculator - weight, height, float variables, arithmetic operators
#include <iostream>
int main(){
    float x;
    std::cout<< "Enter the Weight(In Kg): ";
    std::cin>>x;
    float y;
    std::cout<<"Enter the Height(In Meters): ";
    std::cin>>y;
    
    // Calculating BMI using Arithmetic Operators
   float BMI;
   BMI =  x/ (y * y);
   std::cout << "The BMI is: " <<BMI;
}
