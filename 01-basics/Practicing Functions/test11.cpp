// testing forward declaration

#include <iostream>

using namespace std;

int add(int x,int y);


int main(){
    cout<<"The sum of 10 and 20 is: "<<add(10,20)<<"\n";
    return 0;
}
int add(int x,int y)
{
    return x+y;
}