#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
private:
    float x, y;
public:
    Point(const float x, const float y);
    ~Point();

    float getX();
    float getY();

    float distanceEuclidienne(const Point p1);
	
	float distanceGeodesique(Point point, float rayon);

    void translater(const float dx, const float dy);

    void afficher() const;
};

#endif