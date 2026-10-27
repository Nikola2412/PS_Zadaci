#pragma once

class DriverDCDrive {
private:
	int speed;
public:
	DriverDCDrive() : speed(0) {}
	void setSpeed(int newSpeed) {
		speed = newSpeed;
	}
	int getSpeed() const {
		return speed;
	}
};