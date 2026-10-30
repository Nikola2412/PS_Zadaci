#pragma once

class Item {
public:
	virtual int power() = 0;
	virtual int value() = 0;

	virtual void addItem(Item*) {}
};

#include "Weapon.h"
#include "Jewelry.h"

#include "Bag.h"