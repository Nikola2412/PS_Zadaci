#pragma once
#include <unordered_map>
#include <string>
#include <iostream>
#include "Texture.h"

enum FieldType
{
	LAND = 0,
	WATER = 1
};

class TextureGallery {
	
protected:
	std::unordered_map<FieldType, Texture*> textures;
	TextureWater* createTextureWater()
	{
		return new TextureWater(TextureData{
			.width = 40,
			.height = 40,
			.name = "Water"
			});
	}

	TextureLand* createTextureLand()
	{
		return new TextureLand(TextureData{
			.width = 25,
			.height = 25,
			.name = "Land"
			});
	}

	void printTextureData() {
		for (auto& [type, texture] : textures)
		{
			texture->printData();
		}
	}

public:
	virtual void printData() = 0;

	TextureGallery() = default;
	~TextureGallery() {
		for (auto& [type, texture] : textures)
		{
			delete texture;
		}

		textures.clear();
	}

	Texture* getTexture(FieldType fieldType) {
		if(textures.find(fieldType) == textures.end()) {
			if(fieldType == FieldType::LAND) {
				textures[fieldType] = createTextureLand();
			}
			if(fieldType == FieldType::WATER) {
				textures[fieldType] = createTextureWater();
			}
		}
		return textures[fieldType];
	}
};

#include "TextureGalleryEarth.h"
#include "TextureGalleryMars.h"