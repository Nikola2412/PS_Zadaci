#pragma once
#include "MemFragment.h"


class MemFragmentProxy : public MemFragment {
private:
	MemFragmentImpl* impl;
	int rwx;
	MemFragmentProxy* conn;

	void unbind() {
		this->conn->conn = nullptr;
		this->conn = nullptr;
		this->impl = this->impl->clone();
	}

public:
	MemFragmentProxy(int rwx) : rwx(rwx) , conn(nullptr){}
	MemFragmentProxy(int size, int rwx) : rwx(rwx), impl(new MemFragmentImpl(size)) {}

	byte read(int address) {
		if (rwx & 0b100) {
			return impl->read(address);
		}
		throw "READ ERROR";
	}
	void write(int address, byte data) {
		if (rwx & 0b010) {
			if (this->conn) unbind();
			this->impl->write(address, data);
			return;
		}
		throw "WRITE ERROR";

	}
	void execute(int address) {
		if (rwx & 0b001) {
			this->impl->execute(address);
			return;
		}
		throw "EXECUTE ERROR";
	}

	MemFragmentProxy* clone() {
		MemFragmentProxy* child = new MemFragmentProxy(this->rwx);

		child->impl = this->impl;
		this->conn = child;
		child->conn = this;

		return child;
	}

};