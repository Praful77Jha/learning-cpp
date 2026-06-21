// testing working of return values and parameters

#include <iostream>
using namespace std;

int add(int x,int y,int z){
    return x+y+z;
}
int multiply(int a,int b, int c){
    return a*b*c;
}
int sub(int l,int m,int n){
    return l-m-n;
}
int div(int e, int f, int g){
    return e/f/g;
}
int main(){
    cout<<add(50-1,56-52,10-3)<<"\n";
    cout<<multiply(9*4,2*8,1*7)<<"\n";
    cout<<add(multiply(76,43,12),sub(12,210,1234),div(22,253,22))<<"\n";
    int k{7};
    cout<<add(k,k,k)<<"\n";
    return 0;


}