// Testing value-returning functions - fuel cost calculator

#include <iostream>

int getDistance(){
    float distance{};
    std::cout<<"Enter The Distance(kM): ";
    std::cin>>distance;
    return distance;
}

int getMileage(){
    float mileage{};
    std::cout<<"Enter The Mileage(kM/litle): ";
    std::cin>>mileage;
    return mileage;
}
int getFuelPrice(){
    float Price{};
    std::cout<<"Enter The Fuel Price(Rs/litre): ";
    std::cin>>Price;
    return Price;
} 
float calculateFuelCost(){
    float Fuel_Cost{};
    Fuel_Cost = (getDistance()/getMileage())*getFuelPrice();
    return Fuel_Cost;
} 
int main(){
    float Cost{calculateFuelCost()};
    std::cout<<"The Fuel cost is : "<< Cost<<" Rupees Only";
    return 0;
} 