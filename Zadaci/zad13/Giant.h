#pragma once
#include "Enemy.h"

class Giant : public Enemy {
public:
	Giant(int power) : Enemy(power) {}

protected:
	Item* dropItem() {
		Bag* bag = new Bag();
		bag->addItem(new Weapon());
		bag->addItem(new Weapon());
		bag->addItem(new Jewelry());
		bag->addItem(new Jewelry());
		bag->addItem(new Jewelry());
		return bag;
	}
};