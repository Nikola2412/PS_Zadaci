#pragma once
#include <iostream>

#include "Coordinates.h"
#include "MagicMushroom.h"

class Magician {
private:
	int hp;
	Coordinate xy;
public:
	Magician(Coordinate xy) : xy(xy), hp(100) {}

	void move(Direction dir) {
		this->xy.move(dir);
	}

	void teleport(Direction dir, int times) {
		for (size_t i = 0; i < times; i++)
		{
			this->xy.move(dir);
		}
	}
	void incHealth(int hp = 1) {
		this->hp += hp;
	}

	void decHealth(int hp = 1) {
		this->hp -= hp;
	}

	void printInfo() {
		std::cout << xy.printInfo() << std::endl;
		std::cout << this->hp << std::endl;
	}

	void useMushroom(MagicMushroom* mm) {
		mm->use(this);
	}
};