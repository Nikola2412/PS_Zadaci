#include "../main.h"
#include "TextureGallery.h"

#include <iostream>

void test7() {
	TextureGallery* galleryEarth = new TextureGalleryEarth();
	TextureGallery* galleryMars = new TextureGalleryMars();
	Texture* textureEarthLand = galleryEarth->getTexture(FieldType::LAND);
	Texture* textureMarsLand = galleryMars->getTexture(FieldType::LAND);
	galleryEarth->printData();
	galleryMars->printData();

	textureEarthLand->setTextureData(TextureData{
		.width = textureEarthLand->getTextureData().width,
		.height = textureEarthLand->getTextureData().height,
		.name = "Earth test"
		});

	textureMarsLand->setTextureData(TextureData{
		.width = textureMarsLand->getTextureData().width,
		.height = textureMarsLand->getTextureData().height,
		.name = "Mars test"
		});
	galleryEarth->printData();
	galleryMars->printData();

	Texture* textureEarthWater = galleryEarth->getTexture(FieldType::WATER);
	Texture* textureMarsWater = galleryMars->getTexture(FieldType::WATER);

	galleryEarth->printData();
	galleryMars->printData();


	textureEarthWater->setTextureData(TextureData{
		.width = textureEarthWater->getTextureData().width + 20,
		.height = textureEarthWater->getTextureData().height - 25,
		.name = "Earth test"
		});

	textureMarsWater->setTextureData(TextureData{
		.width = textureMarsWater->getTextureData().width + 20,
		.height = textureMarsWater->getTextureData().height - 25,
		.name = "Mars test"
		});
}