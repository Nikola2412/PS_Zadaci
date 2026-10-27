#include "test1.h"

void test1() {
	Tea* tea = new Tea();
	tea->makeBeverage();
	delete tea;
	coffee* cof = new coffee();
	cof->makeBeverage();
	delete cof;
}