// Testing value-returning functions - electricity bill calculator with GST

#include <iostream>

int getUnitsConsumed(){
    int units{};
    std::cout<<"Enter the Units Consumed(kWh): ";
    std::cin>>units;
    return units;
}

float getRatePerUnit(){
    float rate{};
    std::cout<<"Enter Rate Per unit(Rs./kWh): ";
    std::cin>>rate;
    return rate;
}

float calculatebill(){
    float bill{};
    bill = getUnitsConsumed()*getRatePerUnit();
    return bill;
}

float calculateTax(float bill){
    float tax{};
    tax = bill * 0.18;
    return tax;
}

float calculateTotal(){
    float bill = calculatebill();
    float Total = bill + calculateTax(bill);
    return Total;
}

int main(){
    float Total{calculateTotal()};
    std::cout<<"Your Electricity Bill is: "<<Total<<" Rupees";
    return 0;
}

