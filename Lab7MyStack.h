//Lab7MyStack.h
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 05
//October 15th, 2018
//creates the functions used in Lab7MyStack.cpp
//Additional credits: Jagadish Banapanally; initial functions found in Container.h in Lab 5 files

#ifndef LAB7MYSTACK_H_
#define LAB7MYSTACK_H_

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <iostream>
#include <stack>
using namespace std;

class Lab7 {

public:
	string stringReversal1(string input);  //prototypes for the reversal of any strings present

	string stringReversal2(string input);

	string stringReversal3(string input);

	string stringReversal4(string input);


};

class MyStack {
private:
	vector<char> beginning;

public:
	//MyStack();                    //constructor for class

	~ MyStack() {};                 //deconstructor for class

	bool isEmpty() const;         //prototype for checking for an empty stack      

	void push(char& c);           //prototype for pushing an element of a stack

	char pull();                  //prototype for topping and popping a stack
};

#endif
