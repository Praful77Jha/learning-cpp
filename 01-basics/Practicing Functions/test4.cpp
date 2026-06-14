// Testing value-returning functions - single responsibility: separate input, calculation, and output
#include <iostream>
float getPrincipal(){
    float principal{};
    std::cout<<"Enter the Principle Amount(Rs.): ";
    std::cin>>principal;
    return principal;
}
float getRate(){
    float  rate{};
    std::cout<<"Enter the Rate(%): ";
    std::cin>> rate;
    return  rate;


}
int getTime() {
    int time{};
    std::cout<<"Enter the Time(Years): ";
    std::cin>>time;
    return time;

}
float calculateSimpleInterest(){
    float Simple_Interest{};
 Simple_Interest = ( getPrincipal()* getRate() * getTime()) / 100;
 return Simple_Interest;

 
}
int main(){
    std::cout<<"Simple Interest is : "<< calculateSimpleInterest() <<" Rupees";
    return 0;
}