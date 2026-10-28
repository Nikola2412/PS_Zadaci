#include "../main.h"
#include "OS.h"

void test8() {
	OS os;
	Process* p1 = os.createProcess();
	Process* p2 = os.createProcess();

	p1->getData()->write(1,(byte)32);
	std::cout << (int)p1->getData()->read(1) << std::endl;
}