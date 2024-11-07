#include "../include/point.h"
#include <iostream>
#include <cmath>

Point::Point(const float x0, const float y0){
    x = x0;
    y = y0;
}

Point::~Point(){

}

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
}

float Point::distanceEuclidienne(const Point p1){
    return sqrt(pow(x-p1.x, 2) + pow(y-p1.y, 2));
}

float Point::distanceGeodesique(Point point, float rayon) {
	float lat1 = asin(static_cast<float>(this->y) / rayon);
	float long1 = atan2(this->y, this->x);
	
	float lat2 = asin(static_cast<float>(point.y) / rayon);
	float long2 = atan2(point.y, point.x);
	
	float delta_lat = lat2 - lat1;
	float delta_long = long2 - long1;
	
	float h = sin(delta_lat / 2.) * sin(delta_lat / 2.) + cos(lat1) * cos(lat2) * sin(delta_long / 2.) * sin(delta_long / 2.);
	
	return 2. * rayon * asin(sqrt(h));
}

void Point::translater(const float dx, const float dy){
	x += dx;
	y += dy;
}


void Point::afficher() const{
    cout << "(" << x << "," << y << ")";
}