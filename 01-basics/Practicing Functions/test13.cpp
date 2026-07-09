// testing conditional stats in preprocessors
#include <iostream>
#define PRINT_PRAFUL
#define PRINT_NITIN
int main (){
    #ifdef PRINT_PRAFUL
        std::cout << "PRAFUL\n";
    #endif
    #ifdef PRINT_NITIN
        std::cout<<"NITIN\n";
        #endif
    return 0;
}
