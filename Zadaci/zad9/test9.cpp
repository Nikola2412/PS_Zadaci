#include "../main.h"
#include "SubjectRegistry.h"

void test9() {
	SubjectRegistry* sr = new SubjectRegistry();

	Subject* s = sr->getSubject(60);

	s->f3();

}