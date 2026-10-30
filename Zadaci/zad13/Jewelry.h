#pragma once
#include "Item.h"

class Jewelry : public Item {
public:
	int power() {
		return 0;
	}

	int value() {
		return 2000;
	}
};