#pragma once

#include "TextureGallery.h"

class TextureGalleryEarth : public TextureGallery {
public:
	TextureGalleryEarth() = default;
public:
	void printData() {
		std::cout << "TextureGalleryEarth" << std::endl;
		this->printTextureData();
	}
};