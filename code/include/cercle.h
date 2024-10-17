#ifndef CERCLE_H
#define CERCLE_H
#include "point.h"

using namespace std;

class Cercle{
private:
    Point c;
    unsigned short r;
public:
    Cercle(const Point p0, unsigned short r0);
    ~Cercle();
	
	unsigned short getRayon() const;

    float perimetre();

    void translater(const short dx, const short dy);

    void afficher();
};

#endif