#include "test7.h"
#include "TextureGallery.h"

#include <iostream>

void test7() {
	TextureGallery* galleryEarth = new TextureGalleryEarth();
	Texture* textureLand = galleryEarth->getTexture(FieldType::LAND);

	textureLand->setTextureData(TextureData{
		.width = textureLand->getTextureData().width,
		.height = textureLand->getTextureData().height,
		.name = "test"
		});
	galleryEarth->printData();

	Texture* textureLand2 = galleryEarth->getTexture(FieldType::LAND);

	if (textureLand == textureLand2) {
		std::cout << "Same texture" << std::endl;
	}

	Texture* textureWater = galleryEarth->getTexture(FieldType::WATER);

	galleryEarth->printData();


	textureWater->setTextureData(TextureData{
		.width = textureWater->getTextureData().width + 20,
		.height = textureWater->getTextureData().height - 25,
		.name = "test2"
		});

	Texture* textureWater2 = galleryEarth->getTexture(FieldType::WATER);

	if (textureWater == textureWater2) {
		std::cout << "Same texture" << std::endl;
	}

	delete galleryEarth;
}