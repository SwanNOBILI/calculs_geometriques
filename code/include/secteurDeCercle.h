#ifndef SECTEUR_DE_CERCLE_H
#define SECTEUR_DE_CERCLE_H

#include "cercle.h"
#include <cmath>
#include <iostream>

using namespace std;

class SecteurDeCercle {
private:
    Cercle cercle;
    float angle;

public:
    SecteurDeCercle(const Cercle & c0, float angleDegres);
    ~SecteurDeCercle();

    float perimetre() const;
    float surface() const;
    void afficher() const;
};

#endif