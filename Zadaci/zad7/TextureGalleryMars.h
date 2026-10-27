#pragma once
#include "TextureGallery.h"

class TextureGalleryMars : public TextureGallery {
public:
	TextureGalleryMars() = default;
public:
	void printData() {
		std::cout << "TextureGalleryEarth" << std::endl;
		this->printTextureData();
	}
};