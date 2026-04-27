//Tyler Brown
//CIS 1202 501
//April 27, 2026

#include <iostream>

using namespace std;

class invalidCharacterException {};
class invalidRangeException {};

char character(char, int);

int main()
{
	char start;
	int offset;

	try
		driver
	catch
		exception pointer errorMessage
}

char character(char start, int offset)
{
	if (!isalpha(start))
	{
		throw invalidCharacterException();
	}

	char var = start + offset;

	if (!isalpha(var) || (isupper(start) && !isupper(var)) || (islower(start) && !islower(var))
	{ 
		throw invalidRangeException();
	}
		
	return var;
}
