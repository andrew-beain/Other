#include "header.h"

int displayGame(int &num1, int &num2, char &opperation, int &score, int &result, int &canswer){
	if(score == 0){
		cout << "Welcome to Math Helper, to quit enter 101" << endl; 
	}

	cout << "Current Score: " << score << endl << "Your problem is " << num1 << opperation << num2 << endl; 

	switch(result){
		case '0':
			canswer = num1 + num2;
			break;
		case '1':
			canswer = num1 - num2;
			break;
		case '2':
			canswer = num1 * num2;
			break;
	}
	return canswer; 
}

int generateNumber(){
	int number = 0;
	
	srand(unsigned(time(NULL)));
	number = rand() % 10;
	return number;
	
}

char generateOperation(int &result){
	char opperation = 0;

	srand(unsigned(time(NULL)));
	result = rand() % 3;

	switch(result){
		case '0':
			opperation = char(43);
			break;
		case '1':
			opperation = char(45);
			break;
		case '2':
			opperation = char(42);
			break;
	}

	return opperation;
	
}

int readUserInput(int canswer, int& exit){
	int userAnswer = 0;
	char validate;
	for(validate = 0; validate != 1;){
		int userAnswer;
		cout << "Your Answer: ";
		cin >> userAnswer;

		if(userAnswer < -10 || userAnswer > 101){
			cout << "Invalid input" << endl;
		}

		else if(userAnswer == 101){
			exit = 1;
		}

		else{
			validate = 1;
		}
	}
	return userAnswer;
}

bool validateAnswer(int uanswer, int canswer){
	bool correct = 0;
	if(uanswer == canswer){
		cout << "You were correct" << endl;
		correct = 1;
	}
	else{
		cout << "You were incorrect" << endl;
		correct = 0;
	}

	return correct;
}