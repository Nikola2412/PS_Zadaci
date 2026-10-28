#pragma once

#include "DriverCounter.h"
#include "DriverDCDrive.h"
#include "DriverMotor.h"

// singleton  + Fasada

class HAL {
public:
	static HAL& getInstance() {
		static HAL instance(new DriverCounter(), new DriverDCDrive(), new DriverMotor());
		return instance;
	}
	HAL(DriverCounter* counter, DriverDCDrive* dcDrive, DriverMotor* motor) : driverCounter(*counter), driverDCDrive(*dcDrive), driverMotor(*motor) {}
private:
	DriverCounter driverCounter;
	DriverDCDrive driverDCDrive;
	DriverMotor driverMotor;

	// fasada
	void setSpeed(int speed) {
		driverDCDrive.setSpeed(speed);
		driverCounter.reset();
		driverMotor.start();
	}
	friend class SpeedAdapter;
};