#pragma once
#include "User.h"
#include "StockService.h"

#include <unordered_map>

class Company : public User {
private:
	static const int stockNumber = 5;
	double threshold;
	std::unordered_map<Stock*,int> stocks;
public:
	Company(double threshold) : threshold(threshold) {}

	void update(Stock* stock, double delta) {
		if (delta < 0 && stock->getPrice() < threshold) {
			StockService::getInstance().buyStock(stock,stockNumber);
			//stocks.set(stock, stockNumber);
			stocks[stock] = stockNumber;
		}
		if (delta > 0 && (stocks.find(stock) != stocks.end())) {
			StockService::getInstance().sellStock(stock,
				stocks[stock]);
			stocks[stock] = 0;
		}
	}
};