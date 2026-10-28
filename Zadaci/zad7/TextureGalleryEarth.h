#pragma once

#include "TextureGallery.h"

class TextureGalleryEarth : public TextureGallery {
public:
	TextureGalleryEarth() = default;

	TextureWater* createTextureWater() {
		return new TextureWater(TextureData{
			.width = 40,
			.height = 40,
			.name = "Earth later"
			});
	}

	TextureLand* createTextureLand()
	{
		return new TextureLand(TextureData{
			.width = 25,
			.height = 25,
			.name = "Earth land"
			});
	}
public:
	void printData() {
		std::cout << "TextureGalleryEarth" << std::endl;
		TextureGallery::printData();
	}
};