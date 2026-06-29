// Testing Library managemnet system

void addbook(){
    int bookID{};
    std::cout << "Enter Book ID: ";
    std::cin >> bookID;
    std::cout << "Book added successfully!";
}
int calculatefine(){
    int days{};
    std::cout << "Enter the no of days late: ";
    std::cin >> days;
    
    int fine = days * 10;
    return fine;
}
bool checkAvailability(){
    int bookID{};
    std::cout << "Enter Book ID to check: ";
    std::cin >> bookID;
    
    if(bookID > 0){
        return true;
    } else {
        return false;
    }
}

