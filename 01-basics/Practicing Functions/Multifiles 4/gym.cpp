// testing practicing multifiles with gym membership insertion


#include <iostream>

int calculatebasemonths(int months){
    return months*1500;    
}

int calculateSignUpFee(int months){
    if(months>=6){
        return 0;
    }else{
        return 500;
    }
}
void printBill(){
    int memberID;
    int months;
    std::cout<<"Enter the Member ID: ";
    std::cin>>memberID;

    std::cout<<"Enter the months you want to join: ";
    std::cin>>months;

    int baseCost = calculatebasemonths(months);
    int signUpFee = calculateSignUpFee(months);
    int totalBill = baseCost + signUpFee;

    std::cout << "\n--- GYM BILL ---\n";
    std::cout << "Member ID: " << memberID << "\n";
    std::cout << "Months Joined: " << months << "\n";
    std::cout << "Base Cost: Rupee " << baseCost << "\n";
    std::cout << "Sign-up Fee: Rupee " << signUpFee << "\n";
    std::cout << "Total Bill: Rupee " << totalBill << "\n";

}
