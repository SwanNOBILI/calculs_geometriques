#include "../include/point.h"
#include <iostream>

Point::Point(const short x0, const short y0){
    x = x0;
    y = y0;
}

Point::~Point(){

}

void Point::afficher(){
    cout << "(" << x << "," << y << ")";
}