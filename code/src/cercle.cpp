#include "../include/cercle.h"
#include <iostream>

Cercle::Cercle(const Point p0, unsigned short r0) : c(p0) {
    r = r0;
}

Cercle::~Cercle(){
    
}

void Cercle::afficher(){
    cout << "Cercle de centre = "; 
    c.afficher();
    cout << " de Rayon = " << r << endl;
}