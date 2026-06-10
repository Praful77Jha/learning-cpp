// testing diff b/w literal and variable printing
#include <iostream>
int main() {
    std:: cout << 5<<"\n"; // literal printing
    int x{5};
    std:: cout << x<<'\n'; // variable printing
}