#include "../main.h"
#include "Singleton.h"
#include "Multiton.h"

void test3() {
	Singleton::getInstance().getMemory();
    Multiton* a = Multiton::getInstance("A");
    Multiton* b = Multiton::getInstance("B");
    Multiton* c = Multiton::getInstance("A");

    a->getMemory();
    b->getMemory();
    c->getMemory();
}