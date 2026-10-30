#include "../main.h"

#include <cassert>

#include "Stock.h"
#include "User.h"
#include "StockService.h"

class RecordingUser : public User {
public:
	int notificationCount = 0;
	Stock* lastStock = nullptr;
	double lastDelta = 0;

	void update(Stock* stock, double delta) override {
		++notificationCount;
		lastStock = stock;
		lastDelta = delta;
	}
};

class TestableStockService : public StockService {
public:
	void notifyStockChange(Stock* stock, double delta) {
		stockChange(stock, delta);
	}
};

void test12() {
	Stock stock("Example Corp", 100.0);
	TestableStockService service;
	RecordingUser user;

	service.registerUser(&user);
	service.notifyStockChange(&stock, -2.5);

	assert(user.notificationCount == 1);
	assert(user.lastStock == &stock);
	assert(user.lastDelta == -2.5);

	service.removeUser(&user);
	service.notifyStockChange(&stock, 4.0);
	assert(user.notificationCount == 1);
}