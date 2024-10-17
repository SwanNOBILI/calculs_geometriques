#include "include/cercle.h"
#include "include/point.h"
#include "include/polygone.h"
#include "include/segmentDeCercle.h"
#include "include/ellipse.h"
#include <iostream>

void demos(string choix);

int main(){
    demos("sprint2");
    return 0;
}

void demos(string choix){
    if (choix == "sprint1"){
        Point p0(0,0), p1(-3,0), p2(-3,-4), p3(1, 1);   
        Polygone pol({p0,p1,p2});
        Cercle c0(p0, 5);
        

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

    }else if(choix=="sprint2"){
        Point p0(0,0), p1(0,4), p2(3,4);
        Cercle c0(p0, 5);
        Polygone pol({p0,p1,p2});
        Ellipse e0(p0, 5, 3);
        SegmentDeCercle sdc0(c0, 60);

        // Points
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Avant translation: p0 -> "; p0.afficher(); cout << endl;
        p0.translater(3,2);
        cout << "Apres translation de (3,2): p0 -> "; p0.afficher(); cout << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Avant translation: c0 -> "; c0.afficher();
        c0.translater(5,5);
        cout << "Apres translation de (5,5): c0 -> "; c0.afficher();
        cout << "Perimetre 2*pi*r= " << c0.perimetre() << endl;
        cout << "Surface pi*(r^2)= " << c0.surface() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Polygones
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Polygone qui contient les points" << endl;
        pol.afficher();
        cout << "Surface = " << pol.surface() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Segment De Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        sdc0.afficher();
        cout << "Perimetre = " << sdc0.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Ellipses
        cout << "------------------------------------------------------------------------------------------" << endl;
        e0.afficher();
        cout << "Perimetre = " << e0.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
    }else{
        cout << "Choisir un sprint valide !!!" << endl;
    }

}
