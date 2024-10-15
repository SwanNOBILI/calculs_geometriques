#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
private:
    short x, y;
public:
    Point(const short x, const short y);
    ~Point();

    float distanceEuclidienne(const Point p1);

    void afficher();
};

#endif