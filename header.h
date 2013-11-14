#ifndef HEADER_H
#define HEADER_H

#include <ctime>
#include <string>
#include <iostream>

int displayGame(int&, int&, char&, int&, int&, int&);
int generateNumber();
char generateOperation(int&);
int readUserInput(int, int&);
bool validateAnswer(int, int);

using namespace std;

#endif
