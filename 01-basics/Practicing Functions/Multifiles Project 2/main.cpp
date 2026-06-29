
#include <iostream>

void addbook();
int calculatefine();
bool checkAvailability();

int main(){
    addbook();
    std::cout << "\nFine Amount: " << calculatefine();
    
    bool available = checkAvailability();
    std::cout << "\nIs Available: " << available;
    
    return 0;
}

