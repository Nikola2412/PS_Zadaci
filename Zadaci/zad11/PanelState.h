#pragma once
#include <string>

class PanelState {
private:
	std::string text;
public:
	PanelState(std::string text) : text(text) {}
	std::string getText() {
		return text;
	}
	void setText(std::string t) {
		text = t;
	}
};