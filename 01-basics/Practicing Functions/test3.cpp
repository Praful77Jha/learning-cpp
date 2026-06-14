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
int getCircleArea(){
    float radius{};
    std::cout<<"Enter the Radius: ";
    std :: cin>>radius;
    return radius;
    
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
    return side;
    
}

int main(){
 
    std::cout << "Rectangle Area: " << getRectangleArea() * getRectangleArea();
    std::cout << "\nCircle Area: " << 3.14159 * getRectangleArea() * getRectangleArea();
    std::cout << "\nTriangle Area: " << 0.5 * getTriangleArea() * getTriangleArea();
    std::cout << "\nSquare Area: " << getSquareArea() * getSquareArea();
    return 0;
   
}