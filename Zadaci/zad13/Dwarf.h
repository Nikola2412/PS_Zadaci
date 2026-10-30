#pragma once

#include "Enemy.h"

class Dwarf : public Enemy {
public:
	Dwarf(int power) : Enemy(power) {}

protected:
	Item* dropItem() {
		return new Weapon();
	}
};