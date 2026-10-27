#pragma once
#include <string>
#include <iostream>
struct TextureData
{
	int width = 25;
	int height = 25;
	std::string name = "Default";
};

class Texture {
public:
	Texture(const TextureData& data = TextureData()) : data(data) {};
	TextureData getTextureData() {
		return data;
	}
	void setTextureData(const TextureData& newData) {
		data = newData;
	}
private:
	void printData() {
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Texture: " << data.name << std::endl;
		std::cout << "Width: " << data.width << std::endl;
		std::cout << "Height: " << data.height << std::endl;
		std::cout << "-----------------------------------" << std::endl;
	}
private:
	TextureData data;
	friend class TextureGallery;
};

#include "TextureLand.h"
#include "TextureWater.h"