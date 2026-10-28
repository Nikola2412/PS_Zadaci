#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "QuestionChooser.h"

// Strategija. Kad se pozove displayQuestion 
// zove se questionChooser umesto grananja ifa.

class Chatbot {
private:
    std::vector<std::string> questions = {
        "What is 2 + 2?",
        "What is 3 * 3?",
        "What is 9 / 3?",
        "What time is it?"
    };
    QuestionChooser* questionChooser;
public:
	Chatbot(QuestionChooser* questionChooser) {
		this->questionChooser = questionChooser;
	}
	void setQuestionChooser(QuestionChooser* questionChooser) {
		this->questionChooser = questionChooser;
	}
    void displayQuestions() {

        while (!questions.empty()) {
			int index = questionChooser->getQuestion(questions.size());
			std::string question = questions[index];
			std::cout << question << std::endl;
			questions.erase(questions.begin() + index);
        }
    }
};