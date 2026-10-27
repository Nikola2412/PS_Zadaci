#pragma once
class QuestionChooser {
public:
	virtual int getQuestion(int len) = 0;
};

#include "FirstQuestionChooser.h"
#include "RandomQuestionChooser.h"