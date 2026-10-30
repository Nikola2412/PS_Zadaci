#pragma once
#include "User.h"
#include "StockService.h"

#include <unordered_map>

class IndividualUser : public User {
private:
	static const int stockNumber = 2;

	std::unordered_map<Stock*, int> stocks;

public:
	IndividualUser() {};

	void update(Stock* stock, double delta) {
        if (delta < 0) {
            StockService::getInstance().buyStock(stock, stockNumber);
            stocks[stock] = stockNumber;
            return;
        }
        if (delta > 0 && (stocks.find(stock) != stocks.end())) {
            StockService::getInstance().sellStock(stock, stocks[stock]);
            stocks[stock] = 0;
        }
	}
};