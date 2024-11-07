#ifndef SEGMENT_DE_CERCLE_H
#define SEGMENT_DE_CERCLE_H

#include "cercle.h"
#include <cmath>
#include <iostream>

using namespace std;

class SegmentDeCercle {
private:
	Cercle cercle;
	float angle;

public:
	SegmentDeCercle(const Cercle & c0, float angleDegres);
	~SegmentDeCercle();

	float perimetre() const;
	float surface() const;
	void afficher() const;
};

#endif