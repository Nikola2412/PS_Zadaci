#pragma once

#include <iostream>

class make
{
public:
	void makeBeverage() {
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
protected:
	void boilWater() {
		std::cout << "Boiling water" << std::endl;
	}
	void pourInCup() {
		std::cout << "Pouring into cup" << std::endl;
	}
};

#include "Tea.h"
#include "coffee.h"

