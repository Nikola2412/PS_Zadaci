#pragma once
#include <vector>
#include "Item.h"

class Enemy;
class Hero {
private:
	std::vector<Item*> inventory;

	int power;
	int coins;

public:
	Hero(int power) : power(power), coins(0) {}

	int fullPower() {
		int sum = power;

		for (auto& item : inventory) {
			sum += item->power();
		}

		return sum;
	}

	void interact(Enemy* enemy);

	void addItem(Item* item) {
		inventory.push_back(item);
	}

	void sellItem(int id) {
		inventory.erase(inventory.begin() + id);
	}
};