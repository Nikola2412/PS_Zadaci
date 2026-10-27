#pragma once
#include "Coffee.h"

class SingleOriginCoffee : public Coffee
{
private:
	int _price = 200;
public:
	SingleOriginCoffee() = default;
	int price() override {
		return _price;
	}
	std::string getDesc() override {
		return "Single Origin Coffee";
	}
};

