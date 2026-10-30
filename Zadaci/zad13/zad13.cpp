#include "../main.h"
#include <iostream>

#include "Hero.h"
#include "Enemy.h"


void Hero:: interact(Enemy* enemy) {
	enemy->interact(this);
}


void Enemy::interact(Hero* hero) {
	if (hero->fullPower() > this->power) {

		hero->addItem(dropItem());
	}
}


void test13() {
	Hero* hero = new Hero(100);

	Bag* bag = new Bag();
	bag->addItem(new Weapon());
	bag->addItem(new Jewelry());
	hero->addItem(bag);

	std::cout << hero->fullPower() << std::endl;


	Elf* elf = new Elf(10);
	Dwarf* dwarf = new Dwarf(100);
	Giant* giant = new Giant(10000);

	hero->interact(elf);
	hero->interact(dwarf);
	hero->interact(giant);

	std::cout << hero->fullPower() << std::endl;

}