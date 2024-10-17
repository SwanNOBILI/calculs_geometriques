#include "../include/cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(const Point p0, unsigned short r0) : c(p0) {
    r = r0;
}

Cercle::~Cercle(){
    
}

unsigned short Cercle::getRayon() const {
	return this->r;
}

float Cercle::perimetre(){
    return 2*M_PI*r;
}

void Cercle::afficher(){
    cout << "Centre = "; 
    c.afficher();
    cout << " de Rayon = " << r << endl;
}
