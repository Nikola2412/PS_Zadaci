#pragma once
#include "Subject.h"
#include <string>
#include "HttpInterface.h"
#include <unordered_map>


//zastupnik
class SubjectProxy : public Subject {
private:
	std::string address;
	int _id;
	HttpInterface* http;

public:
	SubjectProxy(int id, std::string address, HttpInterface* http) : _id(id),address(address), http(http) {}

	void f1() {
		std::unordered_map<std::string, std::string> parameters;
		parameters["id"] = std::to_string(_id);
		parameters["method"] = "f1";

		int code = this->http->get(address, parameters);

		if (code == 200) {
			std::cout << "OK" << std::endl;
		}
	}
	void f2() {
		std::unordered_map<std::string, std::string> parameters;
		parameters["id"] = std::to_string(_id);
		parameters["method"] = "f2";

		int code = this->http->get(address, parameters);

		if (code == 200) {
			std::cout << "OK" << std::endl;
		}
	}
	int f3() {
		std::unordered_map<std::string, std::string> parameters;
		parameters["id"] = std::to_string(_id);
		parameters["method"] = "f3";

		std::string responseBody = this->http->post(address, parameters);

		std::string key = "\"returnValue\":";
		size_t pos = responseBody.find(key);

		if (pos == std::string::npos) {
			return -1; // returnValue not found
		}

		pos += key.length();

		while (pos < responseBody.length() && responseBody[pos] == ' ') {
			pos++;
		}

		return std::stoi(responseBody.substr(pos));
	}
	int id() {
		return this->_id;
	}

};