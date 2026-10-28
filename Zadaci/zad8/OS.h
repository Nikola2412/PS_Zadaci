#pragma once
#include <iostream>
#include "Process.h"

#define CODE_SIZE 64
#define DATA_SIZE 128
#define STACK_SIZE 32

class OS {
public:
	Process* createProcess() {

		Process* p = new Process();
		p->code = new MemFragmentProxy(CODE_SIZE, 0b001);
		p->data = new MemFragmentProxy(DATA_SIZE, 0b110);
		p->stack = new MemFragmentProxy(STACK_SIZE, 0b110);

		std::cout << "Process created" << std::endl;
		return p;

	}
};