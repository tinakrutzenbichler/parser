// parser.hpp
#ifndef PARSER_HPP
#define PARSER_HPP
#include <iostream>
#include <string>
#include <math.h>

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

class Parser
{
	public:
	string readIn();
	string emptySpaces(string input);
	void parseString(string input);
};

#endif
