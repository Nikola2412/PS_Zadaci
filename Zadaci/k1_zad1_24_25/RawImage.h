#pragma once
#include "Image.h"


class RawImage : public Image {
public:
	RawImage(std::vector<Pixel*> i) : Image(i) {}
};