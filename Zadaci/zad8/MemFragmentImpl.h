#pragma once
#include "MemFragment.h"

class MemFragmentImpl : public MemFragment {
private:
	byte* data;
	int size;
public:
	MemFragmentImpl(int size) : data(size > 0 ? new byte[size] : nullptr), size(size > 0 ? size : 0) {}

	byte read(int address) {
		if (!this->data || address < 0 || address >= size)
			return (byte)0;

		return data[address];
	}

	void write(int address, byte data) {
		if (!this->data || address < 0 || address >= size) return;
		this->data[address] = data;
	}

	void execute(int adress) {

	}
	MemFragmentImpl* clone() {
		MemFragmentImpl* copy = new MemFragmentImpl(this->size);

		for (int i = 0; i < this->size; i++) {
			copy->data[i] = this->data[i];
		}

		return copy;
	}
};