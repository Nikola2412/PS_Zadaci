#pragma once
#include "Coffee.h"

class CoffeeAddition : public Coffee {
private:
	Coffee* _coffee;
public:
	CoffeeAddition(Coffee* coffee) : _coffee(coffee) {}
	int price() override {
		return _coffee->price();
	}
	std::string getDesc() override {
		return _coffee->getDesc();
	}
};

#include "ChocolateCoffeeAddition.h"
#include "MilkCoffeeAddition.h"
#include "SugarCoffeeAddition.h"