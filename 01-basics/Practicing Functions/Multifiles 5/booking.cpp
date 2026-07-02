

#include <iostream>
int calculateTicketCost(int ticketCount){
    return ticketCount*250;
}
int calculateHandlingFee(int ticketCount){
    if(ticketCount>=4){
    return 0;
    }else{
        return 60;
    }
}
void printReceipt(){
    int bookingID;
    int tickets;

    std::cout<<"Enter the Booking ID: ";
    std::cin>>bookingID;
    
    std::cout<<"Enter The Number of Tickets Bought: ";
    std::cin>>tickets;

}
