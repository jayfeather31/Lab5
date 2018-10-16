//Lab7Driver.cpp
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 05
//October 15th, 2018
//utilizes the functions created in Lab7MyStack.cpp
//Additional credits: Jagadish Banapanally; initial functions found in Container.h in Lab 5 files

#include "Lab7MyStack.h"
#include  <iostream>
int main()
{
	Lab7 stringrev;
	cout << stringrev.stringReversal1("erisa") << endl;
	cout << stringrev.stringReversal2("erisa") << endl;
	cout << stringrev.stringReversal3("erisa") << endl;
	cout << stringrev.stringReversal4("erisa") << endl;
	system("pause");
}