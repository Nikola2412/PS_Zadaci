#pragma once
#include "HAL.h"

class SpeedAdapter {
private:
	HAL& hal;
public:
	SpeedAdapter() : hal(HAL::getInstance()) {}

	void setSpeed(int speed) {
		hal.setSpeed(speed);
	}
};