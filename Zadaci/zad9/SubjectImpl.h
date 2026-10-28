#pragma once
#include "Subject.h"

class SubjectImpl : public Subject {
private:
	int _id;
public:
	SubjectImpl(int id) : _id(id) {}

	void f1() {

	}

	void f2() {

	}

	int f3() {
		return 0;
	}

	int id() {
		return this->_id;
	}
};