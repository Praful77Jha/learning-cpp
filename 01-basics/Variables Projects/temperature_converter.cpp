// Testing - Temperature Converter - Celsius to Fahrenheit and Fahrenheit to Celsius
#include <iostream>
int main(){
    double Celsius;
    double Fahrenheit;
    // C TO F
    std::cout<<"Enter the Temprature in Celsius: ";
    std::cin>>Celsius;
    Fahrenheit = (Celsius * 9/5) + 32;
    std::cout<<"Conversion C TO F is: "<<Fahrenheit<<" F"<<"\n";

    // F TO C
    std::cout<<"Enter the Temprature in Farenheit: ";
    std::cin>>Fahrenheit;
    Celsius = (Fahrenheit - 32) * 5/9;
    std::cout<<"Conversion F TO C is: "<<Celsius<<" C"<<"\n";



}