#pragma once
#include "QuestionChooser.h"

class FirstQuestionChooser : public QuestionChooser {
public:
	int getQuestion(int len) override {
		return 0;
	}
};