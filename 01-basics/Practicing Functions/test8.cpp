// Testing Using return values as arguments

#include <iostream>
using namespace std;
int getvaluefromuser(){
    int input{};
    cout<<"Enter the integer: ";
    cin>>input;
    return input;
}
void printdouble(int value){
    cout<<value<<"Double is: "<<value*2<<"\n"; 
}
int main(){
    printdouble(getvaluefromuser());
    return 0;
}