#include "../include/point.h"
#include <iostream>
#include <cmath>

Point::Point(const short x0, const short y0){
    x = x0;
    y = y0;
}

Point::~Point(){

}

float Point::distanceEuclidienne(const Point p1){
    return sqrt(pow(x-p1.x, 2) + pow(y-p1.y, 2));
}

void Point::afficher(){
    cout << "(" << x << "," << y << ")";
}
