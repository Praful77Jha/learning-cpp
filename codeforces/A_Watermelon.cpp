// Watermelon - 4A
// Split W into two even parts both >= 2

#include<iostream>
int main(){
    int a;
    std::cin>>a;
    if(a%2==0 && a>2){
        std::cout<<"YES\n";
    }else{
        std::cout<<"NO\n";
    }
    return 0;
}