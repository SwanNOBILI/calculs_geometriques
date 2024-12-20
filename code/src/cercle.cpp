#include "../include/cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(const Point p0, float r0) : c(p0) {
    r = r0;
}

Cercle::~Cercle(){
    
}

Point Cercle::getCentre() const{
    return c;
}

float Cercle::getRayon() const {
	return r;
}

float Cercle::perimetre() const {
    return 2*M_PI*r;
}

float Cercle::surface() const {
    return M_PI*pow(r, 2);
}

void Cercle::translater(const float dx, const float dy) {
    c.translater(dx, dy);
}

void Cercle::afficher(const bool b) const{
    cout << "Cercle de centre = "; 
    c.afficher();
    cout << " de Rayon = " << r;
    if (b){
        cout << endl;
    }
}

vector<Point> Cercle::genererPoints(int n_points) const{
    std::vector<Point> points;
    points.reserve(n_points);
    for (int i = 0; i < n_points; ++i) {
        float angle = 2 * M_PI * i / n_points;
        float x = getCentre().getX() + getRayon() * cos(angle);
        float y = getCentre().getY() + getRayon() * sin(angle);
        points.push_back(Point (x,y));
    }
    return points;
}
