#pragma once

class Item1 {
protected:
	int data;
public:
	Item1(int data) : data(data) {}
	virtual Item1* clone() = 0;
	int getData() const { return data; }
};

class Item1A : public Item1 {
public:
	Item1A(int data) :  Item1(data) {}
	virtual Item1* clone() override {
		Item1A* copy = new Item1A(this->data);
		return copy;
	}
};

class Item1B : public Item1 {
public:
	Item1B(int data) : Item1(data) {}
	virtual Item1* clone() override {
		Item1B* copy = new Item1B(this->data);
		return copy;
	}
};