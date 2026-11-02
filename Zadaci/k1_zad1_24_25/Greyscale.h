#pragma once
//R, G, B = 0.3 * R + 0.59 * G + 0.11 * B

#include "Filter.h"

class Greyscale : public Filter {
public:
	Greyscale(Image* i) : Filter(i) {};
private:
	Pixel* mod(Pixel* p) {
		int gray = p->getR() * 0.3 + p->getG() * 0.59 + p->getB() * 0.11;
		return new Pixel(gray, gray, gray);
	}
};