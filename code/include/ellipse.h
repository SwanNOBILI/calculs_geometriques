#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

class Ellipse {
private:
	Point centre;	// Centre de l'ellipse
	float a;	// Demi-axe majeur
	float b;	// Demi-axe mineur

public:
	Ellipse(const Point& centre0, float a0, float b0);
	~Ellipse();

	float calculerPerimetre() const;
	void afficher() const;
};

#endif
