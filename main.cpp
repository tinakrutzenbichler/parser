// my first program in C++
#include <iostream>
#include <string>
#include "parser.hpp"

using namespace std;

enum SymboleType
{
	OPENPAR,
	CLOSEPAR,
	PLUS,
	MINUS,
	ENTIER,
	EXPR,
	DOLLAR
};

string readIn()
{
	string name;
	cout << "Please enter the String: \n";
	getline (cin,name);
	cout << "You entered: " << name << "\n";
	return name;
}

string emptySpaces(string input)
{
	string output;
	int j = 0;
	for(int i=0; i<input.length(); i++)
	{
		char leerzeichen = input.at(i);
		int a = (int)leerzeichen;
		if(a!=32)
		{
			output += input.at(i);
			j++;
		}
	}
	return output;
}

int parseString(string input)
{	
	string finalString = emptySpaces(input);
	cout << "Without Spaces is the String: " << finalString << "\n" ;
	char first = input.at(0);
	int ia = (int)first;
	char second = input.at(1);
	int ib = (int)second;
	return ib;	
}

int main()
{
  	cout << "In the program.\n";
	string input;
	input = readIn();
	int firstInt;
	firstInt = parseString(input);
	cout << "Your int is : \n" << firstInt;
  	return 0;
}
