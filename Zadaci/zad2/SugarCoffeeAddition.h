#pragma once
#include "CoffeeAddition.h"

class SugarCoffeeAddition : public CoffeeAddition {
private:
	int _price = 0;
public:
	SugarCoffeeAddition(Coffee* coffee) : CoffeeAddition(coffee) {}
	int price() override {
		return CoffeeAddition::price() + this->_price;
	}
	std::string getDesc() override {
		return CoffeeAddition::getDesc() + " with Sugar";
	}
};