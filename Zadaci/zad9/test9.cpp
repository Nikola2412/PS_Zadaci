#include "../main.h"
#include "SubjectRegistry.h"
#include <cassert>

void test9() {
	SubjectRegistry sr;

	Subject* localSubject = sr.getSubject(31);
	assert(localSubject->id() == 31);
	localSubject->f1();
	localSubject->f2();
	const int localResult = localSubject->f3();
	assert(localResult == 31);

	Subject* remoteSubject = sr.getSubject(32);
	assert(remoteSubject->id() == 32);
	remoteSubject->f1();
	remoteSubject->f2();
	const int remoteResult = remoteSubject->f3();
	assert(remoteResult == -1);

	Subject* remoteSubjectAtEnd = sr.getSubject(63);
	assert(remoteSubjectAtEnd->id() == 63);
}