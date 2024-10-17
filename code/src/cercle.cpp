#include "../include/cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(const Point p0, unsigned short r0) : c(p0) {
    r = r0;
}

Cercle::~Cercle(){
    
}

unsigned short Cercle::getRayon() const {
	return r;
}

float Cercle::perimetre() const {
    return 2*M_PI*r;
}

float Cercle::surface() const {
    return M_PI*pow(r, 2);
}

void Cercle::translater(const short dx, const short dy) {
    c.translater(dx, dy);
}

void Cercle::afficher(){
    cout << "Centre = "; 
    c.afficher();
    cout << " de Rayon = " << r << endl;
}
