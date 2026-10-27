#pragma once
class DriverCounter {
private:
	int count;
public:
	DriverCounter() : count(0) {}
	void reset() {
		count = 0;
	}
	void inc() {
		count++;
	}
	int getCount() const {
		return count;
	}
};