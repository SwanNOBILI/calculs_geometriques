#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
private:
    short x, y;
public:
    Point();
    Point(const short x, const short y);
    ~Point();

    void afficher();
};

#endif