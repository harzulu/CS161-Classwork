#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 

using namespace std;

char c;

/******************************************************************
 * ** Function: swap_case
 * ** Description: generate and return the opposite case character
 * ** (lower-case => upper-case and vice-versa)
 * ** Parameters: a single character, c
 * ** Pre-conditions: c is a lower-case (a-z) or upper-case (A-Z) letter
 * ** Post-conditions: if c is lower-case, return upper-case C,
 * ** and vice-versa
 * ******************************************************************/
char swap_case(char c)
{
	if (c >= 97 && c <= 122)
	{       
         
		c = c - 32;
		cout << c << endl;
		return c;
	}

	else if (c >= 65 && c <= 90)
	{
		c = c + 32;
		cout << c << endl;
		return c;
	}
}

/******************************************************************
 * ** Function: is_vowel
 * ** Description: check whether a character is a vowel
 * ** Parameters: a single character, c
 * ** Pre-conditions: c is a lower-case letter (a-z)
 * ** Post-conditions: return true if c is a vowel and otherwise false
 * ******************************************************************/
bool is_vowel(char c)
{
    if ( c == 'a' || c == 'e' || c == 'i' || c== 'o' || c == 'u')
    {
    	return true;
    }

    else if ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
    	return true;
    }

    else
    {
    	return false;
    }
}

int main()
{

	cout << "enter a letter: " << endl;
	cin >> c;

	bool vowel = is_vowel(c);

	if (vowel == true)
	{
		cout << c << " is a vowel." << endl;
	}

	else if (vowel == false)
	{
		cout << c << " is not a vowel." << endl;
	}

	else
	{
		cout << "something went wrong." << endl;
     	}

	cout << c << " switched to lower or upper case, is: " << endl;

	cout << swap_case(c) << endl;

	return 0;	

}
