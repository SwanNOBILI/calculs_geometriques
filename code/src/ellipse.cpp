#include "../include/ellipse.h"

Ellipse::Ellipse(const Point & centre0, float a0, float b0) 
	: centre(centre0), a(a0), b(b0) {
	// On s'assure que les demi-axes sont ordonnés
	if (a0 < b0) {
		a = b0;
		b = a0;
	}
	if (a0 <= 0 || b0 <= 0) {
		throw invalid_argument("Les demi-axes doivent etre positifs.");
	}
}

Ellipse::~Ellipse() {
	// Destructor
}

Point Ellipse::getCentre() const {
    return centre;
}

float Ellipse::getDemiAxeMajeur() const {
    return a;
}

float Ellipse::getDemiAxeMineur() const {
    return b;
}

float Ellipse::perimetre() const {
	// Utilisation de la formule approchée de Ramanujan pour le périmètre de l'ellipse
	float h = pow((a - b), 2) / pow((a + b), 2); // Paramètre auxiliaire h
	float perimetre = M_PI * (a + b) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));

	return perimetre;
}

float Ellipse::surface() const {
    return M_PI * a * b;
}

void Ellipse::translater(const float dx, const float dy) {
    centre.translater(dx, dy);
}

void Ellipse::afficher() const{
	cout << "Ellipse de centre ";
	centre.afficher();
	cout << " avec demi-axe majeur a = " << a << " et demi-axe mineur b = " << b << endl;
}

vector<Point> Ellipse::genererPoints(int n_points) const {
    std::vector<Point> points;
    points.reserve(n_points);
	
    for (int i = 0; i < n_points; ++i) {
        float angle = 2 * M_PI * i / n_points; // Angle en radians
        float x = getCentre().getX() + a * cos(angle); // Demi-axe majeur
        float y = getCentre().getY() + b * sin(angle); // Demi-axe mineur
        points.push_back(Point(x, y));
    }

    return points;
}