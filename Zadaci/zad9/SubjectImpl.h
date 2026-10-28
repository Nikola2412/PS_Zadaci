#pragma once
#include "Subject.h"
#include <iostream>

class SubjectImpl : public Subject {
private:
	int _id;
public:
	SubjectImpl(int id) : _id(id) {}

	void f1() {
		std::cout << "SubjectImpl::f1 (id: " << _id << ')' << std::endl;
	}

	void f2() {
		std::cout << "SubjectImpl::f2 (id: " << _id << ')' << std::endl;
	}

	int f3() {
		return _id;
	}

	int id() {
		return this->_id;
	}
};