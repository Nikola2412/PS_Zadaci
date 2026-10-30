#pragma once
#include "Stock.h"
#include "StockService.h"
class User {
public:
	virtual void update(Stock* stock, double delta) = 0;
};

#include "Company.h"
#include "IndividualUser.h"