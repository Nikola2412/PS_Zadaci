#pragma once
#include <vector>
#include "Pixel.h"


class Image {
protected:
	std::vector<Pixel*> image;

public:
	Image() = default;
	Image(std::vector<Pixel*> image) : image(image) {}

	virtual std::vector<Pixel*> getPixels() {
		return image;
	}
};

#include "RawImage.h"
