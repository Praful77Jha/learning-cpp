// Testing Practicing Multifiles using mobile recharge fee calculation


#include <iostream>
int calculateTax(int talktimeAmount){
    return talktimeAmount*0.15;
}
int calculateProcessingFee(int talktimeAmount){
    if (talktimeAmount>=500){
        return 0;
    }else{
        return 20;
    }
}
void printBill() {
    long long phnnum;
    int cost;

    std::cout << "Enter the Phone Number: +91 ";
    std::cin >> phnnum;

    std::cout << "Enter the Plan cost (in Rs.): ";
    std::cin >> cost;

    double tax = calculateTax(cost); 
    int processingFee = calculateProcessingFee(cost);

 
    double total = cost + tax + processingFee;

    std::cout << "\n--- RECHARGE RECEIPT ---\n";
    std::cout << "Mobile Number: +91 " << phnnum << "\n";
    std::cout << "Plan Cost: Rs. " << cost << "\n";
    std::cout << "Service Tax (15%): Rs. " << tax << "\n";
    std::cout << "Processing Fee: Rs. " << processingFee << "\n";
    std::cout << "Total Amount: Rs. " << total << "\n";

}