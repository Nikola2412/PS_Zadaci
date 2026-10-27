#pragma once
#include "Coffee.h"

class BlendCoffee : public Coffee
{
private:
	int _price = 150;
public:
	BlendCoffee() = default;
	int price() override {
		return _price;
	}
	std::string getDesc() override {
		return "Blend Coffee";
	}
};

