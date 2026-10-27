#pragma once
class DriverMotor {
private:
	bool isRunning;
public:
	DriverMotor() : isRunning(false) {}
	void start() {
		isRunning = true;
	}
	void stop() {
		isRunning = false;
	}
	bool getStatus() const {
		return isRunning;
	}
};