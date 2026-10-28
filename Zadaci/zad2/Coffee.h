#pragma once

#include <string>

// Sve vrste kafe i prilozi se izvode iz Coffe, 
// pri cemu ce prilozi biti dekoracije.
// Cena dekoracije ce rekurzivno dodaje

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