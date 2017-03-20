#include "parser.hpp"


string Parser::readIn()
{
	string name;
	cout << "Please enter the String: \n";
	getline (cin,name);
	cout << "You entered: " << name << "\n";
	return name;
}

string Parser::emptySpaces(string input)
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

void Parser::parseString(string input)
{	
	string finalString = emptySpaces(input);
	for(int i=0; i<input.length(); i++)
	{
		char temp_char = input.at(i);
		int temp_int = (int) temp_char;
		// sozusagen habe ich hier einen string, und ich will testen ob des ein int ist und ihn dann auch als int speichern		
		if(isdigit(temp_char)){
			cout << "Eine Zahl: " << temp_char << "\n"; 
		} else {
			switch(temp_int) {
		    		case 40 : cout << "Klammer auf \n"; 
			     		break;      
		    		case 41 : cout << "Klammer zu \n";
			     		break;
				case 42 : cout << "Mal \n";
			     		break;
				case 43 : cout << "Plus \n";
			    		break;
				default: cout << "non-valid symbol \n"; //throw "You entered a non-valid symbol!";
			}
		}
	}	
}
