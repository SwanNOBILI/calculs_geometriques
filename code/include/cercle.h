#ifndef CERCLE_H
#define CERCLE_H
#include "point.h"

using namespace std;

class Cercle{
private:
    Point c, a;
public:
    Cercle(const Point &c, const Point &a);
    ~Cercle();
};

#endif