#pragma once
#include <string>

class Stock {
private:
	std::string name;
	double price;

public:
	Stock(std::string name, double price) : name(name), price(price) {}

	std::string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}
};