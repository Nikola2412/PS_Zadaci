#pragma once
#include <unordered_map>
#include <string>
#include "Subject.h"
#include "HttpInterface.h"

#define ADDRESS "192.196.1.6"

class SubjectRegistry {
private:
	std::unordered_map<int, Subject*>objects;
	std::unordered_map<int, Subject*>objectsOnServer;
	std::string address;

public:
	SubjectRegistry() : address(ADDRESS){
		HttpInterface* http = new ApacheAdapter();

		for (size_t i = 0; i < 64; i++)
		{
			if (i < 32) {
				objects[i] = new SubjectImpl(i);
			}
			else {
				objectsOnServer[i] = new SubjectProxy(i, address, http);
			}
		}
		
	}

	Subject* getSubject(int id) {
		if (objects.find(id) != objects.end()) {
			return objects[id];
		}
		if (objectsOnServer.find(id) != objectsOnServer.end()) {
			return objectsOnServer[id];
		}
		throw "ERROR";
	}

};