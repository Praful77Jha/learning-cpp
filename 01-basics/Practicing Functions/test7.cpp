//Tetsing function parameters and arguments

#include <iostream>
int getvaluefromuser(){
    int input{};
    std::cout<<"Enter the integer: ";
    std::cin>>input;
    return input;
}
void printdouble(int value){
    std::cout<<"Double is:  "<<value*2<<"\n";
}
int main(){
    int num{getvaluefromuser()};
    printdouble(num);
    return 0;
}
