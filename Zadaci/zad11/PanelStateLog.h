#pragma once
#include <stack>
#include "PanelState.h"
class PanelStateLog {
private:
	std::stack<PanelState*> state;
public:
	static PanelStateLog& getInstnce() {
		static PanelStateLog instanece;
		return instanece;
	}

	void push(PanelState* state) {
		this->state.push(state);
	}

	PanelState* pop() {
		PanelState* value = state.top();
		state.pop();
		return value;
	}
};