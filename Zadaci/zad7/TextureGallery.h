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

// apstraktna fabrika + muva
class TextureGallery {
	
protected:
	std::unordered_map<FieldType, Texture*> textures;

	virtual TextureWater* createTextureWater()
	{
		return new TextureWater(TextureData{
			.width = 40,
			.height = 40,
			.name = "default water"
			});
	}

	virtual TextureLand* createTextureLand()
	{
		return new TextureLand(TextureData{
			.width = 25,
			.height = 25,
			.name = "default land"
			});
	}

	void printTextureData() {
		for (auto& [type, texture] : textures)
		{
			texture->printData();
		}
	}

public:
	virtual void printData() {
		for (auto& [type, texture] : textures)
		{
			texture->printData();
		}
	};

	TextureGallery() = default;
	~TextureGallery() {
		for (auto& [type, texture] : textures)
		{
			delete texture;
		}

		textures.clear();
	}

	//sablonski metod jer su createTextureLand/Water koraci koji se redefinisu
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