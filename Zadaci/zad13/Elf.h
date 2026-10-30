#pragma once

#include "Enemy.h"

class Elf : public Enemy {
public:
	Elf(int power) : Enemy(power) {}
protected:
	Item* dropItem() {
		return new Jewelry();
	}
};