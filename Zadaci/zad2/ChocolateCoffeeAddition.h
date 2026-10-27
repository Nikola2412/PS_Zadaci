#pragma once
#include "CoffeeAddition.h"

class ChocolateCoffeeAddition : public CoffeeAddition {
private:
	int _price = 80;
public:
	ChocolateCoffeeAddition(Coffee* coffee) : CoffeeAddition(coffee) {}
	int price() override {
		return CoffeeAddition::price() + this->_price;
	}
	std::string getDesc() override {
		return CoffeeAddition::getDesc() + " with Chocolate";
	}
};