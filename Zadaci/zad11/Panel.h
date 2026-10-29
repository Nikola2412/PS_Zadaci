#pragma once
#include <string>

class Panel {
private:
	std::string text;
public:
	static Panel& getIns() {
		static Panel ins;
		return ins;
	}

	void setText(std::string t) {
		text = t;
	}

	std::string getText() {
		return text;
	}
};