#pragma once
#include "MemFragment.h"

class Process {
private:
	MemFragment *code,*stack,*data;

public:
	MemFragment* getCode() {
		return code;
	}

	MemFragment* getStack() {
		return stack;
	}
	
	MemFragment* getData() {
		return data;
	}

	int fork() {
		Process* child = new Process();
		child->code = code->clone();
		child->stack = stack->clone();
		child->data = data->clone();
		return 0;
	}

	friend class OS;
};