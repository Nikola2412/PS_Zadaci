#pragma once
#include "CoffeeAddition.h"

class MilkCoffeeAddition : public CoffeeAddition {
private:
	int _price = 100;
public:
	MilkCoffeeAddition(Coffee* coffee) : CoffeeAddition(coffee) {}
	int price() override {
		return CoffeeAddition::price() + this->_price;
	}
	std::string getDesc() override {
		return CoffeeAddition::getDesc() + " with Milk";
	}
};