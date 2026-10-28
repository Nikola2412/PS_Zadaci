#pragma once
#include "TextureGallery.h"

class TextureGalleryMars : public TextureGallery {
public:
	TextureGalleryMars() = default;

	TextureWater* createTextureWater()
	{
		return new TextureWater(TextureData{
			.width = 40,
			.height = 40,
			.name = "Mars water"
			});
	}

	TextureLand* createTextureLand()
	{
		return new TextureLand(TextureData{
			.width = 25,
			.height = 25,
			.name = "Mars land"
			});
	}
public:
	void printData() {
		std::cout << "TextureGalleryEarth" << std::endl;
		TextureGallery::printData();
	}
};