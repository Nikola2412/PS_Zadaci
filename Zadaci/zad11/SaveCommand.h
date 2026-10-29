#pragma once
#include "Command.h"

class SaveCommand : public Command {
public:
	void execute() {
		PanelStateLog::getInstnce().push(new PanelState(Panel::getIns().getText()));
	}
};