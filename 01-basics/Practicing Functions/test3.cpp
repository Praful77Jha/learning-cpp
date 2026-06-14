// Testing value-returning functions - area calculator for multiple shapes
#include <iostream>

int getRectangleArea(){
    int length{};
    int width{};
    std::cout<<"Enter the Length: ";
    std::cin>>length;
    std::cout<<"Enter the Width: ";
    std::cin>>width;
    return length*width;
}
float getCircleArea(){
    float radius{};
    std::cout<<"Enter the Radius: ";
    std :: cin>>radius;
    return 3.14159f*radius*radius;
    
}

int getTriangleArea(){
    int base{};
    int height{};
    std::cout<<"Enter the Base: ";
    std :: cin>>base;
    std::cout<<"Enter the Height: ";
    std :: cin>>height;
    return 0.5*base*height;
    
}

int getSquareArea(){
    int side{};
    std::cout<<"Enter the Side: ";
    std :: cin>>side;
    return side*side;
    
}

int main(){
    std::cout << "Rectangle Area -> "<<"\n" << getRectangleArea() << "\n";
    std::cout << "Circle Area -> " <<"\n" << getCircleArea() << "\n";
    std::cout << "Triangle Area -> " <<"\n" << getTriangleArea() << "\n";
    std::cout << "Square Area -> " <<"\n" << getSquareArea() << "\n";
    return 0;
}