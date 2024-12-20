#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "point.h"
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Ellipse {
private:
	Point centre;	// Centre de l'ellipse
	float a;	// Demi-axe majeur
	float b;	// Demi-axe mineur

public:
	Ellipse(const Point& centre0, float a0, float b0);
	~Ellipse();
	
	Point getCentre() const;
	float getDemiAxeMajeur() const;
	float getDemiAxeMineur() const;

	float perimetre() const;
	float surface() const;
	vector<Point> genererPoints(int n_points) const;
	
	void translater(const float dx, const float dy);

	void afficher() const;
};

#endif
