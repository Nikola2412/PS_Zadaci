#include "../main.h"
#include "Image.h"
#include "Filter.h"

//https://siwiki.rs/wiki/%D0%9F%D1%80%D0%BE%D1%98%D0%B5%D0%BA%D1%82%D0%BE%D0%B2%D0%B0%D1%9A%D0%B5_%D1%81%D0%BE%D1%84%D1%82%D0%B2%D0%B5%D1%80%D0%B0/%D0%9A1_2024

void k1_zad1_24_25() {
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