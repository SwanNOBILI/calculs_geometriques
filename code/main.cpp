#include "include/cercle.h"
#include "include/point.h"
#include "include/polygone.h"
#include "include/SegmentDeCercle.h"
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
	SegmentDeCercle sdc0(c0, 45);

    // Points
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "p0 = "; p0.afficher(); cout << endl;
    cout << "Distance Euclidienne entre p0 et p3 = " << p0.distanceEuclidienne(p3) << endl;
	cout << "Distance Geodesique entre p0 et p3 avec un rayon de 10 = " << p0.distanceGeodesique(p3, 10) << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
    
    // Polygones
    cout << "------------------------------------------------------------------------------------------" << endl;
    pol.afficher();
    cout << "Perimetre = " << pol.perimetre() << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;

    // Cercles
    cout << "------------------------------------------------------------------------------------------" << endl;
    c0.afficher();
    cout << "Perimetre = " << c0.perimetre() << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
	
	// Segment De Cercle
    cout << "------------------------------------------------------------------------------------------" << endl;
    sdc0.afficher();
    cout << "Perimetre = " << sdc0.perimetre() << endl;
    cout << "------------------------------------------------------------------------------------------" << endl << endl;
}
