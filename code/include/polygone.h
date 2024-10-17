#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include "point.h"

using namespace std;

class Polygone{
private:
    std::vector<Point> p_arr;
public:
    Polygone(const std::vector<Point> p_arr0);
    ~Polygone();

    float perimetre();
    float surface();

    void afficher();
};

#endif