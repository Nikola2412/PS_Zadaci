#pragma once
#include <iostream>

class Singleton {
public:
	Singleton() = default;
	static Singleton& getInstance() {
		static Singleton instance;
		return instance;
	}

	void getMemory() {
		std::cout << "Memory address: " << this << std::endl;
	}
};