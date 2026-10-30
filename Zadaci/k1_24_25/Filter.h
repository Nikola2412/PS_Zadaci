#pragma once
#include "Image.h"

class Filter : public Image {
protected:
	Image* image;
public:
	Filter(Image* i) : image(i) {}

	std::vector<Pixel*> modifie(std::vector<Pixel*> i) {
		std::vector<Pixel*> _new;

		for (Pixel* p : i) {
			_new.push_back(mod(p));
		}

		return _new;
	}

private:
	std::vector<Pixel*> getPixels() {
		return modifie(this->image->getPixels());
	}

private:
	virtual Pixel* mod(Pixel*) = 0;
};

#include "Greyscale.h"
#include "Invert.h"