#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    
    Rectangle r;
    Rectangle* ptrToRect = &r;

    double rectWidth;
    double rectHeight;

    cout << "Enter the width of the rectangle: ";
    cin >> rectWidth;

    cout << "Enter the height of the rectangle: ";
    cin >> rectHeight;

    r.setWidth(rectWidth);
    r.setHeight(rectHeight);
    
    cout << "The area of the rectangle is " << ptrToRect -> getArea();
    
    
    
    
    return 0;
}