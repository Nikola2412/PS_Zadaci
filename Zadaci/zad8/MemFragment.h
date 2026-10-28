#pragma once

enum class byte : unsigned char {};

class MemFragment {
public:
	virtual byte read(int address) = 0;
	virtual void write(int address, byte data) = 0;
	virtual void execute(int address) = 0;
	virtual MemFragment* clone() = 0;
};
#include "MemFragmentImpl.h"
#include "MemFragmentProxy.h"