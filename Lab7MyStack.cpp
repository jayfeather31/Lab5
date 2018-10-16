//Lab7MyStack.cpp
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 05
//October 15th, 2018
//expands upon the function prototypes used in Lab7MyStack.h
//Additional credits: Jagadish Banapanally; initial functions found in Container.h in Lab 5 files

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

#include "Lab7MyStack.h"

string Lab7::stringReversal1(string input)
{
	stack <char> initial;
	string final;                              //stack we are printing to the screen at the end
	if (!initial.empty())                      //if the stack is empty, just skip it
	{
		cout << "There is no need to reverse, the stack is empty." << endl;
	}
	for (int a = 0; a < input.length(); a++)
	{
		initial.push(input.at(a));
	}
	while (!initial.empty())                    //because we are effectively removing elements from a stack, we need to add these back to another stack proper, ending when we remove all elements
	{
		char c = initial.top();                 //grabs the top most element in the stack and stores it
		initial.pop();                          //eliminates it                 
		final.push_back(c);                     //adds the stored stack
	}

	return final;
}

string Lab7::stringReversal2(string input)      //much of what is featured from 2 and 3 is literally just derivatives of what is found in stringReversal1; refer to C++ documentation for vector and list respectively
{
	vector <char> initial;
	string final;
	if (!initial.empty())
	{
		cout << "There is no need to reverse, the stack is empty." << endl;
	}
	for (int a = 0; a < input.length(); a++)
	{
		initial.push_back(input.at(a));
	}

	while (!initial.empty())
	{
		char c = initial.back();
		initial.pop_back();
		final.push_back(c);
	}

	return final;
}

string Lab7::stringReversal3(string input)
{
	list <char> initial;
	string final;
	if (!initial.empty())
	{
		cout << "There is no need to reverse, the stack is empty." << endl;
	}
	for (int a = 0; a < input.length(); a++)
	{
		initial.push_back(input.at(a));
	}

	while (!initial.empty())          
	{
		char c = initial.back();
		initial.pop_back();
		final.push_back(c);
	}

	return final;
}



string Lab7::stringReversal4(string input)
{
	MyStack example;
	string final;
	if (!example.isEmpty())
	{
		cout << "There is no need to reverse, the stack is empty." << endl;
	}
	for (int a = 0; a < input.length(); a++)
	{
		example.push(input.at(a));          //pushes back an element
	}

	while (!example.isEmpty())
	{
		char c = example.pull();            //literally the same as combining the top and pop
		final.push_back(c);
	}
	
	return final;                           //returns the string to be printed to the screen via Lab7Driver.cpp
}

bool MyStack::isEmpty() const
{
	return beginning.size() == 0;          //given that isEmpty() is boolean, this effectively proves that something is either false or not
}

void MyStack::push(char & c)
{
	beginning.push_back(c);                //pushes an element back
}

char MyStack::pull()
{
	char c = beginning.back();             //acts as the "top" of the stack
	beginning.pop_back();                  //takes the "top" of the stack and removes it
	return c;
}
