#include <iostream>

#include "../main.h"
#include "Command.h"
#include "Panel.h"


void test11() {
	Command* save = new SaveCommand();
	Command* undo = new UndoCommand();
	Panel& panel = Panel::getIns();

	panel.setText("test1");
	save->execute();

	panel.setText("testdasdasd asdasd asd as");
	std::cout << panel.getText() << std::endl;
	save->execute();

	panel.setText("testdasdasd asdasd asd asd asd as das sadas");
	std::cout << panel.getText() << std::endl;
	undo->execute();

	std::cout << panel.getText() << std::endl;
}