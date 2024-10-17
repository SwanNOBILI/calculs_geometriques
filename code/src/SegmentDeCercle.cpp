#include "../include/SegmentDeCercle.h"

// Constructeur qui prend l'angle en degrés
SegmentDeCercle::SegmentDeCercle(const Cercle & c0, float angleDegres) 
    : cercle(c0), angle(angleDegres) {
    // On s'assure que l'angle est positif et compris entre 0 et 360 degrés
    if(angleDegres < 0 || angleDegres > 360) {
        throw invalid_argument("L'angle doit être compris entre 0 et 360 degrés.");
    }
}

SegmentDeCercle::~SegmentDeCercle() {
    // Destructor
}

float SegmentDeCercle::calculerPerimetre() const {
    // Convertir l'angle en degrés en radians
    float angleRadians = angle * 3.14159265359 / 180.0;

    // Récupérer le rayon du cercle
    float r = cercle.getRayon();

    // Longueur de l'arc
    float longueurArc = r * angleRadians;

    // Longueur de la corde
    float longueurCorde = 2 * r * sin(angleRadians / 2);

    // Périmètre du segment de cercle
    return longueurArc + longueurCorde;
}

void SegmentDeCercle::afficher() const {
    cout << "Segment de cercle avec un angle de " << angle << " degrés." << endl;
    cout << "Périmètre : " << calculerPerimetre() << endl;
}