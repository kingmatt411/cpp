#include "Rectangle.h"
#include <iostream>
using namespace std;

// Rectangle member function definitions

void Rectangle::setWidth(double w){
    if(w > 0){
        width = w;
    }
}

void Rectangle::setHeight(double h){
    if(h > 0){
        height = h;
    }
}

double Rectangle::getArea(){
    return width * height;
}