#pragma once
#include "Items.h"

//apstraktna fabrika + prototip
// prototip je kad ima kloniranja necega
class Factory {
protected:
	Factory(Item1* item1, Item2* item2) : item1_(item1), item2_(item2) {}

public:
	Item1* createItem1() {
		return item1_->clone();
	}
	Item2* createItem2() {
		return item2_->clone();
	}

protected:
	Item1* item1_;
	Item2* item2_;
};

class FactoryA : public Factory {
public:
	FactoryA(Item1A* item1, Item2A* item2) : Factory(item1, item2) {}
};

class FactoryB : public Factory {
public:
	FactoryB(Item1B* item1, Item2B* item2) : Factory(item1, item2) {}
};
