// Testing Practicing Multifiles using delivery fee calculation

#include <iostream>
int calculateDeliveryFee(int distanceInKm){
    if(distanceInKm < 5 ){
        return 30;
    }
    else {
        return 70;
    }

}
int calculateDiscount(int foodTotal){
    if (foodTotal>500){
        return 100;
    }else{
        return 0;
    }

}
void printFinalBill() {
    int distance{};
    int foodCost{};

    std::cout << "Enter the Delivery Distance (In KM): ";
    std::cin >> distance;

    std::cout << "Enter the Food fee (in Rs.): ";
    std::cin >> foodCost;

    
    int deliveryFee = calculateDeliveryFee(distance);
    int discount = calculateDiscount(foodCost);


    int total = foodCost + deliveryFee - discount;

    
    std::cout << "\n--- FOOD DELIVERY RECEIPT ---\n";
    std::cout << "Food Cost: Rs. " << foodCost << "\n";
    std::cout << "Delivery Fee: Rs. " << deliveryFee << "\n";
    std::cout << "Discount Applied: Rs. " << discount << "\n";
    std::cout << "Total Amount to Pay: Rs. " << total << "\n";
}