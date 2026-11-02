#pragma once
//R = 255 – R, G = 255 – G, B = 255 – B

#include "Filter.h"

class Invert : public Filter {
public:
	Invert(Image* i) : Filter(i) {};
private:
	int inv(int i) {
		return 255 - i;
	}

	Pixel* mod(Pixel* p) {
		return new Pixel(inv(p->getR()), inv(p->getG()), inv(p->getB()));
	}
};