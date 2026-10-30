#pragma once
#include "Item.h"

#include <vector>

class Bag : public Item {
private:
    std::vector<Item*> items;
public:

    int power() {
        int snaga = 0;
        for (Item* s : items) snaga += s->power();
        return snaga;
    }

    int value() override{
        int vrednost = 0;
        for (Item* s : items) vrednost += s->value();
        return vrednost;
    }

    void addItem(Item* s) {
        items.push_back(s);
    }

};