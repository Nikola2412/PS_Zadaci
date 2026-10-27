#pragma once

class Item2 {
protected:
	int data;
public:
	Item2(int data) : data(data) {}
	virtual Item2* clone() = 0;
	int getData() const { return data; }
};

class Item2A : public Item2 {
public:
	Item2A(int data) : Item2(data) {}
	virtual Item2* clone() override {
		Item2A* copy = new Item2A(this->data);
		return copy;
	}
};
class Item2B : public Item2 {
public:
	Item2B(int data) : Item2(data) {}
	virtual Item2* clone() override {
		Item2B* copy = new Item2B(this->data);
		return copy;
	}
};
