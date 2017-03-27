// my first program in C++
#include <iostream>
#include "parser.hpp"

using namespace std;

int main()
{
	
	Parser my_parser;
	my_parser.parseString(my_parser.readIn());

  	return 0;
}
