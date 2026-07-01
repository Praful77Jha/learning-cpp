#include <iostream>
int add(int x, int y, int z);

int mul(int a, int b, int c);

double div(double p, double q, double r);

int sub(int u, int v, int w);

int main(){
    std::cout<<"The sum is: "<<add(4,10,6)<<"\n";
    std::cout<<"The multiplication is: "<<mul(4,10,6)<<"\n";
    std::cout<<"The divison is: "<<div(4,10,6)<<"\n";
    std::cout<<"The subtraction is: "<<sub(4,10,6)<<"\n";
    return 0;

}