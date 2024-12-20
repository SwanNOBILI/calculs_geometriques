#ifndef CERCLE_H
#define CERCLE_H

#include "point.h"
#include <vector>

using namespace std;

class Cercle{
private:
    Point c;
    float r;
public:
    Cercle(const Point p0, float r0);
    ~Cercle();
	
    Point getCentre() const;
	float getRayon() const;

    float perimetre() const;
    float surface() const;
    vector<Point> genererPoints(int n_points) const;

    void translater(const float dx, const float dy);

    void afficher(const bool b) const;
};

#endif