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
	try
	{
		character('a', 1);
	}

	catch (invalidCharacterException)
	{
	}

	catch (invalidRangeException)
	{
	}

	try
	{
		character('a', -1);
	}
	catch (invalidCharacterException)
	{
	}

	catch (invalidRangeException)
	{
	}

	try
	{
		character('Z', -1);
	}

	catch (invalidCharacterException)
	{
	}

	catch (invalidRangeException)
	{
	}

	try
	{
		character('?', 5);
	}

	catch (invalidCharacterException)
	{
	}

	catch (invalidRangeException)
	{
	}

	try
	{
		character('A', 32);
	}

	catch (invalidCharacterException)
	{
	}

	catch (invalidRangeException)
	{
	}
}

char character(char start, int offset)
{
	if (!isalpha(start))
	{
		throw invalidCharacterException();
	}

	char newChar = start + offset;

	if (!isalpha(newChar) || (isupper(start) && !isupper(newChar)) || (islower(start) && !islower(newChar)))
	{ 
		throw invalidRangeException();
	}
		
	return newChar;
}
