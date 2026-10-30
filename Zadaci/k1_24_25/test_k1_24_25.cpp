#include "../main.h"
#include "Image.h"
#include "Filter.h"

void k1_24_25() {
	std::vector<Pixel*> pixels = { 
		new Pixel(2, 2, 2),
		new Pixel(2, 3, 4),
		new Pixel(100, 200, 255) 
	};

	Image* image = new RawImage(pixels);

	for (Pixel* p : image->getPixels()) {
		p->print();
	}

	Image* filterd = new Invert(new Greyscale(image));

	for (Pixel* p : filterd->getPixels()) {
		p->print();
	}
}