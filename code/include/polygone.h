#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include "point.h"

using namespace std;

class Polygone{
private:
    std::vector<Point> sommets;
public:
    Polygone(const std::vector<Point>& points);
    ~Polygone();
};

#endif