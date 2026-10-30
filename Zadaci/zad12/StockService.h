#pragma once
#include <vector>
#include <unordered_map>

class StockService {
private:
    std::vector<User*> users;
    std::unordered_map<Stock*, int> stocks;

public:
	static StockService& getInstance() {
		static StockService instance;
		return instance;
	}
    void registerUser(User* user) {
        this->users.push_back(user);
    }
    void removeUser(User* user) {
        auto it = std::remove(users.begin(), users.end(), user);
        users.erase(it, users.end());
    }
    void buyStock(Stock* stock, int count) {
        stocks[stock] -= count;
    }
    void sellStock(Stock* stock, int count) {
        stocks[stock] += count;
    }

protected:
    void stockChange(Stock* stock, double delta) {
        for (User* user : users) {
            user->update(stock, delta);
        }
    }
};