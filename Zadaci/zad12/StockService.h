#pragma once
#include <vector>
#include <unordered_map>

class StockService {
public:
	static StockService& getInstance() {
		static StockService instance;
		return instance;
	}

};