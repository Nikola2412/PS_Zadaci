#pragma once
#include "Subject.h"
#include <string>
#include "HttpInterface.h"
#include <unordered_map>

class SubjectProxy : public Subject {
private:
	std::string address;
	int id;
	HttpInterface* http;

public:
	SubjectProxy(int id, std::string address, HttpInterface* http) : id(id),address(address), http(http) {}

	void f1() {
		std::unordered_map<std::string, std::string> parameters;
		parameters["id"] = std::to_string(id);
		parameters["method"] = "f1";

		int code = this->http->get(address, parameters);

		//if ....
	}
	void f2() {
		std::unordered_map<std::string, std::string> parameters;
		parameters["id"] = std::to_string(id);
		parameters["method"] = "f2";

		int code = this->http->get(address, parameters);
	}
	int f3() {

	}
	int id() {
		return this->id;
	}

};