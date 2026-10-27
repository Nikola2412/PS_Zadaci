#pragma once
#include "maker.h"

class coffee : public make
{
public:
	coffee() = default;
	void brew() override {
		std::cout << "Dripping coffee through filters" << std::endl;
	}
	void addCondiments() override {
		std::cout << "Adding sugar and milk" << std::endl;
	}
};
