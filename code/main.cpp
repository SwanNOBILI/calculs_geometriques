#include "include/cercle.h"
#include "include/point.h"
#include "include/polygone.h"
#include <iostream>

void sprint1(void);

int main(){
    sprint1(); // Test pour le sprint1
    return 0;
}

void sprint1(){
    Point p0(0,0), p1(-3,0), p2(-3,-4), p3(1, 1);   
    Polygone pol({p0,p1,p2});
    Cercle c0(p0, 5);

    // Points
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
    cout << "p0 = "; p0.afficher(); cout << endl;
    cout << "Distance Euclidienne entre p0 et p3 = " << p0.distanceEuclidienne(p3) << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;

    // Polygones
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
    pol.afficher();
    cout << "Perimetre = " << pol.perimetre() << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;

    // Cercles
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
    c0.afficher();
    cout << "Perimetre = " << c0.perimetre() << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
}
