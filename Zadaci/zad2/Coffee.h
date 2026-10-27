#pragma once

#include <string>

class Coffee
{
public:
	Coffee() = default;
	virtual int price() = 0;
	virtual std::string getDesc() = 0;
};

#include "BlendCoffee.h"
#include "SingleOriginCoffee.h"

#include "CoffeeAddition.h"