// Testing non-value-returning functions - loan EMI printer

#include <iostream>
float getloanamount(){
    float amount{};
    std::cout<<"Enter The loan Amount(Rs.): ";
    std::cin>> amount;
    return amount;
}
float getinterestamount(){
    float interest{};
    std::cout<<"Enter The Interest(%): ";
    std::cin>>interest;
    return interest;
}
int gettenure(){
    int tenure{};
    std::cout<<"Enter The Tenure(Months): ";
    std::cin>>tenure;
    return tenure; 
}

