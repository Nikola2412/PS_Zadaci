#pragma once
#include "Subject.h"

class SubjectImpl : public Subject {
private:
	int id;
public:
	SubjectImpl(int id) : id(id) {}

	void f1() {

	}
	void f2() {

	}
	int f3() {
		return 0;
	}
	int id() {
		return this->id;
	}
};