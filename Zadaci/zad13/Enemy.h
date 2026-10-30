#pragma once

#include "Item.h"

class Hero;
class Enemy {
protected:
	int power;
	Enemy(int pow) : power(pow) {}
public:
	void interact(Hero* hero);
protected:
	virtual Item* dropItem() = 0;
};

#include "Elf.h"
#include "Dwarf.h"
#include "Giant.h"