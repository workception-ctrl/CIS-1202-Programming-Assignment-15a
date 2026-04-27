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
		cout << "Function called with with (a, 1) should return b. Returns: ";
		cout << character('a', 1) << endl;
	}

	catch (invalidCharacterException)
	{
		cout << "threw invalidCharacterException" << endl;
	}

	catch (invalidRangeException)
	{
		cout << "threw invalidRangeException" << endl;
	}

	try
	{
		cout << "\nFunction called with (a, -1) should throw an exception. Returns: ";
		cout << character('a', -1) << endl;
	}
	catch (invalidCharacterException)
	{
		cout << "threw invalidCharacterException" << endl;
	}

	catch (invalidRangeException)
	{
		cout << "threw invalidRangeException" << endl;
	}

	try
	{
		cout << "\nFunction called with (Z, -1) should return Y. Returns: ";
		cout << character('Z', -1) << endl;
	}

	catch (invalidCharacterException)
	{
		cout << "threw invalidCharacterException" << endl;
	}

	catch (invalidRangeException)
	{
		cout << "threw invalidRangeException" << endl;
	}

	try
	{
		cout << "\nFunction called with (?, 5) should throw an exception. Returns: ";
		cout << character('?', 5) << endl;
	}

	catch (invalidCharacterException)
	{
		cout << "threw invalidCharacterException" << endl;
	}

	catch (invalidRangeException)
	{
		cout << "threw invalidRangeException" << endl;
	}

	try
	{
		cout << "\nFunction called with (A, 32) should throw an exception. Returns: ";
		cout << character('A', 32) << endl;
	}

	catch (invalidCharacterException)
	{
		cout << "threw invalidCharacterException" << endl;
	}

	catch (invalidRangeException)
	{
		cout << "threw invalidRangeException" << endl;
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
