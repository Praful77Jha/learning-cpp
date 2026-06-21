// Testing non-value-returning functions - loan EMI printer

#include <iostream>
#include <cmath> 

float getloanamount(){
    float amount{};
    std::cout << "Enter The loan Amount(Rs.): ";
    std::cin >> amount;
    return amount;
}

float getinterestamount(){
    float interest{};
    std::cout << "Enter The Interest(%): ";
    std::cin >> interest;
    return interest;
}

int gettenure(){
    int tenure{};
    std::cout << "Enter The Tenure(Months): ";
    std::cin >> tenure;
    return tenure;
}

void printemi(){
    float P = getloanamount();
    float R = getinterestamount() / 100;
    int N = gettenure();
    
    float EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);
    
    std::cout << "The EMI is(Rs.): " << EMI;
}

int main(){
    printemi();
    return 0;
}

