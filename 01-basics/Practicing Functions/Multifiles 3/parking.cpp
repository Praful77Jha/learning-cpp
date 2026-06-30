// Testing multi-file programming - parking lot calculator 

#include <iostream>
using namespace std;

int calculateCharges(){
    int hours{};
    cout<<"Enter the Hours: ";
    cin>>hours;

    int charge = hours*20;
    return charge;
}
int calculatePenalty(){
    int hours{};
    cout << "Enter the Hours: ";
    cin >> hours;
    
    if(hours > 8){
        return (hours - 8) * 50;
    } else {
        return 0;
    }
}
void printReceipt(){
    int number{};
    cout<<"Enter the Vehicle number: ";
    cin>>number;

    int charges = calculateCharges();
    int penalty = calculatePenalty();

    int total = charges + penalty;
    cout<<"The Total is: "<<total;

    cout << "Vehicle Number:DL1S " << number << "\n";
    cout << "Charges: " << charges << "\n";
    cout << "Penalty: " << penalty << "\n";
    cout << "Total: " << total << "\n";
}