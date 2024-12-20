#include "include/cercle.h"
#include "include/ellipse.h"
#include "include/point.h"
#include "include/polygone.h"
#include "include/segmentDeCercle.h"
#include "include/secteurDeCercle.h"
#include <iostream>

void demos(string choix);
std::vector<Point> genererPointsCercle(const Cercle& c, int n_points);

int main(){
    demos("sprint4");
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
        SegmentDeCercle seg0(c0, 60);

        // Points
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Avant translation: p0 -> "; p0.afficher(); cout << endl;
        p0.translater(3,2);
        cout << "Apres translation de (3,2): p0 -> "; p0.afficher(); cout << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Avant translation: c0 -> "; c0.afficher(true);
        c0.translater(5,5);
        cout << "Apres translation de (5,5): c0 -> "; c0.afficher(true);
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
        seg0.afficher();
        cout << "Perimetre = " << seg0.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Ellipses
        cout << "------------------------------------------------------------------------------------------" << endl;
        e0.afficher();
        cout << "Perimetre = " << e0.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
    
    }else if(choix=="sprint3"){
        Point p0(0,0), p1(0,4), p2(3,4);
        Polygone pol0({p0,p1,p2});
        Cercle c0(p0, 1);
        Polygone pol1(genererPointsCercle(c0, 1000));
        Ellipse e0(p0, 5, 3);
        SegmentDeCercle seg0(c0, 60);
        SecteurDeCercle sec0(c0, 60);

        // Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        c0.afficher(true);
        cout << "Perimetre exacte = " << c0.perimetre() << endl;
        cout << "Perimetre approxime = " << pol1.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
        
        // Polygones
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Polygone avant translation" << endl;
        pol0.afficher(); 
        pol0.translater(5, 5);
        cout << "Polygone apres translation" << endl;
        pol0.afficher();
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Secteur De Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Secteur de Cercle avant translation" << endl;
        sec0.afficher();
        sec0.translater(5, 5);
        cout << "Secteur de Cercle apres translation" << endl;
        sec0.afficher();
        cout << "Perimetre = " << sec0.surface() << endl;
        cout << "Surface = " << sec0.surface() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Segment De Cercles
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Segment de Cercle avant translation" << endl;
        seg0.afficher();
        seg0.translater(5, 5);
        cout << "Segment de Cercle apres translation" << endl;
        seg0.afficher();
        cout << "Perimetre = " << seg0.perimetre() << endl;
        cout << "Surface = " << seg0.surface() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Ellipses
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Ellipse avant translation" << endl;
        e0.afficher();
        e0.translater(5, 5);
        cout << "Ellipse apres translation" << endl;
        e0.afficher();
        cout << "Surface = " << e0.surface() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
    
    }else if(choix=="sprint4"){
        Point p0(0,0);
        Cercle c0(p0, 1);
        Ellipse e0(p0, 5, 3);
        int nb_points = 500;
        Polygone pol0(c0.genererPoints(nb_points));
        Polygone pol1(e0.genererPoints(nb_points));

        // Perimetre Cercle
        cout << "------------------------------------------------------------------------------------------" << endl;
        c0.afficher(true);
        cout << "Perimetre exacte = " << c0.perimetre() << endl;
        cout << "Perimetre approxime = " << pol0.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;

        // Perimetre Ellipse
        cout << "------------------------------------------------------------------------------------------" << endl;
        e0.afficher();
        cout << "Perimetre exacte = " << e0.perimetre() << endl;
        cout << "Perimetre approxime = " << pol1.perimetre() << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
    }else{
        cout << "Choisir un sprint valide !!!" << endl;
    }

}

std::vector<Point> genererPointsCercle(const Cercle& c, int n_points = 100) {
    std::vector<Point> points;
    points.reserve(n_points);
    for (int i = 0; i < n_points; ++i) {
        float angle = 2 * M_PI * i / n_points;
        float x = c.getCentre().getX() + c.getRayon() * cos(angle);
        float y = c.getCentre().getY() + c.getRayon() * sin(angle);
        points.push_back(Point (x,y));
    }
    return points;
}