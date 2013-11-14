#include "header.h"

int main(){
	int num1, num2, canswer = 0, uanswer, score = 0, result = 0, exit = 0;
	char opperation = 0;

	while(exit = 101){
		num1 = generateNumber();
		opperation = generateOperation(result);
		num2 = generateNumber();
		canswer = displayGame(num1, num2, opperation, score, result, canswer);
		uanswer = readUserInput(canswer, exit);
		if(validateAnswer (uanswer, canswer)){
			score++;
		}
	}
	

return 0;
}