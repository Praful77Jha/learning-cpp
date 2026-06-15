// Testing value-returning functions - electricity bill calculator with GST
#include <iostream>
int getUnitsConsumed(){
    int units{};
    std::cout<<"Enter the Units Consumed(kWh): ";
    std::cin>>units;
    return units;
}
int getRatePerUnit(){
    float rate{};
    std::cout<<"Enter Rate Per unit(Rs./kWh): ";
    std::cin>>rate;
    return rate;
}
int calculatebill(){
    float bill{};
    bill = getUnitsConsumed()*getRatePerUnit();
    return bill;
}
int calculateTax(){
    float tax{};
    tax= calculatebill()*0.18; // Tax In india is 18% GST
    return tax;
}
int calculateTotal(){
    float Total{};
    Total = calculatebill()+calculateTax();
    return Total;
}
int main(){
    std::cout<<"Your Electricity Bill is: "<<calculateTotal()<<" Rupees";
    return 0;
}

