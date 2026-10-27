#include "test5.h"
#include <iostream>

void test5() {
	FactoryA factoryA(new Item1A(10), new Item2A(50));
	FactoryB factoryB(new Item1B(20), new Item2B(100));

	Item1* item1A = factoryA.createItem1();
	Item2* item2A = factoryA.createItem2();
	Item1* item1B = factoryB.createItem1();
	Item2* item2B = factoryB.createItem2();

	std::cout << item1A->getData() << std::endl;
	std::cout << item2A->getData() << std::endl	;
	std::cout << item1B->getData() << std::endl;
	std::cout << item2B->getData() << std::endl	;
}