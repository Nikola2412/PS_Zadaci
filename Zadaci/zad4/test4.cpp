#include "../main.h"
#include "Chatbot.h"

void test4() {
	QuestionChooser* questionChooser = new RandomQuestionChooser();
	Chatbot chatbot(questionChooser);
	std::cout << "Displaying questions in random order:" << std::endl;
	chatbot.displayQuestions();
}