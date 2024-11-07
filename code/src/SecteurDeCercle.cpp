#include "../include/SecteurDeCercle.h"

// Constructeur qui prend l'angle en degrés
SecteurDeCercle::SecteurDeCercle(const Cercle & c0, float angleDegres)
    : cercle(c0), angle(angleDegres) {
    // On s'assure que l'angle est positif et compris entre 0 et 360 degrés
    if(angleDegres < 0 || angleDegres > 360) {
        throw invalid_argument("L'angle doit être compris entre 0 et 360 degrés.");
    }
}

SecteurDeCercle::~SecteurDeCercle() {
    // Destructor
}

float SecteurDeCercle::perimetre() const {
    // Convertir l'angle en degrés en radians
    float angleRadians = angle * 3.14159265359 / 180.0;

    // Récupérer le rayon du cercle
    float r = cercle.getRayon();

    // Longueur de l'arc
    float longueurArc = r * angleRadians;

    // Périmètre du secteur de cercle (arc + 2 rayons)
    return longueurArc + 2 * r;
}

float SecteurDeCercle::surface() const {
    // Convertir l'angle en degrés en radians
    float angleRadians = angle * 3.14159265359 / 180.0;

    // Récupérer le rayon du cercle
    float r = cercle.getRayon();

    // Surface du secteur de cercle
    return 0.5 * r * r * angleRadians;
}

void Cercle::translater(const short dx, const short dy) {
    cercle.translater(dx, dy);
}

void SecteurDeCercle::afficher() const {
    cout << "Secteur de cercle avec un angle de " << angle << " degrés." << endl;
    cout << "Périmètre : " << perimetre() << endl;
    cout << "Surface : " << surface() << endl;
}