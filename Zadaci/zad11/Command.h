#pragma once

#include "PanelStateLog.h"
#include "Panel.h"
#include <string>

class Command {
public:
	virtual void execute() = 0;
};

#include "SaveCommand.h"
#include "UndoCommand.h"