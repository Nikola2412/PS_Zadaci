#pragma once
#include "QuestionChooser.h"

#include <random>

class RandomQuestionChooser : public QuestionChooser {
public:
	int getQuestion(int len) override {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> dist(0, len - 1);
		return dist(gen);
	}
};