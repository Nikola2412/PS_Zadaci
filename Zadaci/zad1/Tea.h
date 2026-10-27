#pragma once
#include "maker.h"

class Tea : public make
{
public:
	Tea() = default;
	void brew() override {
		std::cout << "Steeping the tea" << std::endl;
	};
	void addCondiments() override {
		std::cout << "Adding Lemon" << std::endl;
	};
};

