#pragma once
#include "HAL.h"

//adapter
class SpeedAdapter {
private:
	HAL& hal;
public:
	SpeedAdapter() : hal(HAL::getInstance()) {}

	//interface
	void setSpeed(int speed) {
		hal.setSpeed(speed);
	}
};