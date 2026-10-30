#pragma once
#include "Item.h"


class Weapon : public Item{
public:
	int power() {
		return 5000;
	}

	int value() {
		return 50;
	}
};