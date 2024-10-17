#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
private:
    short x, y;
public:
    Point(const short x, const short y);
    ~Point();

    short getX();
    short getY();

    float distanceEuclidienne(const Point p1);
	
	float distanceGeodesique(Point point, short rayon);

    void translater(const short dx, const short dy);

    void afficher();
};

#endif