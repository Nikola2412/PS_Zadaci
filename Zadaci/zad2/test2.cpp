#include <iostream>
#include "test2.h"

void test2() {
	Coffee *coffee = new ChocolateCoffeeAddition(new MilkCoffeeAddition(new SugarCoffeeAddition(new BlendCoffee())));
	std::cout << coffee->getDesc() << std::endl;
	std::cout << "Price: " << coffee->price() << std::endl;
}