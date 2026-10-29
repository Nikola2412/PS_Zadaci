#pragma once
#include "Command.h"

class UndoCommand : public Command {
public:
	void execute() {
		Panel::getIns().setText(PanelStateLog::getInstnce().pop()->getText());
	}
};