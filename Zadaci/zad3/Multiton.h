#pragma once
#include <unordered_map>
#include <iostream>
#include <string>

class Multiton {
private:
	inline static std::unordered_map<std::string, Multiton*> instances;
	Multiton() = default;
public:
	static Multiton* getInstance(const std::string& key) {
		if (instances.find(key) == instances.end()) {
			instances[key] = new Multiton();
		}
		return instances[key];
	}
	void getMemory() {
		std::cout << "Memory address: " << this << std::endl;
	}
};