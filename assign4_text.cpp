/*****************************************************
 *Program: Text Surgeon 
 *Author: Benjamin McFarland 
 *Date: Feb. 20th, 2020
 *Description: A program that takes in a user-entered string and does different things to the string
 *Input: A user entered string
 *Output: Different variations of that string
 ******************************************************/
#include <iostream>
#include <cstring>
#include <ctime> 
#include <cstdlib> 
#include <unistd.h>
#include <iterator>
#include <stdio.h>
#include <string.h>

using namespace std;

/******************************************************************
 * ** Function: vowels_vs_cons
 * ** Description: Calculates the number of vowels vs consonants
 * ** Parameters: user entered string
 * ** Pre-conditions: user entered string
 * ** Post-conditions: number of vowels and consonants
 * ******************************************************************/
void vowel_vs_cons(char* user_string[], int length)
{
	int vowel = 0;
	int consonant = 0;

	for (int i = 0; i <= length; i++)
	{
		

		if ( *user_string[i] == 'a' || *user_string[i] == 'e' || *user_string[i] == 'i' || *user_string[i] == 'o' || *user_string[i] == 'u')
    	{
    		vowel += 1;
    	}

    	else if ( *user_string[i] == 'A' || *user_string[i] == 'E' || *user_string[i] == 'I' || *user_string[i] == 'O' || *user_string[i] == 'U')
    	{
    		vowel += 1;
    	}
    	else if (*user_string[i] > 64 && *user_string[i] < 91)
    	{
    		consonant += 1;
    	}
    	else if (*user_string[i] > 96 && *user_string[i] < 123)
    	{
    		consonant += 1;
    	}
	}

	cout << "There are " << vowel << " vowels and " << consonant << "consonants." << endl;
}

/******************************************************************
 * ** Function: letter_swap
 * ** Description: Swaps two user entered letters in user string
 * ** Parameters: user string, two letters
 * ** Pre-conditions: two chars, user string
 * ** Post-conditions: new string with the letters swapped
 * ******************************************************************/
void letter_swap(char* user_string[], int length)
{
	char* copy_string = new char[50];
	copy_string = strcpy (copy_string, *user_string);
	char user_letter_before;
	char user_letter_after;

	cout << "What letter do you want to swap from? " << endl;
	cin >> user_letter_before;

	cout << "What letter do you want to swap it to? " << endl;
	cin >> user_letter_after;

	for (int i = 0; i <= length; i++)
	{
		if (*user_string[i] == user_letter_before)
		{
			copy_string[i] = user_letter_after;
		}
	}

	cout << copy_string << endl;;
}

/******************************************************************
 * ** Function: flip_string
 * ** Description: flips the string backwards
 * ** Parameters: user entered string
 * ** Pre-conditions: user entered string
 * ** Post-conditions: user entered string backwards
 * ******************************************************************/
void flip_string(char* user_string[], int length)
{
	char* copy_string = new char[50];
	copy_string = strcpy (copy_string, *user_string);
	int l = length;

	for (int i = 0; i <= l; i++) for (int x = l; x >= 0; x--)
	{
		copy_string[i] = *user_string[x];
	}

	cout << copy_string << endl;
}

/******************************************************************
 * ** Function: frequancy
 * ** Description: finds the frequancy of letters in the user's string
 * ** Parameters: user string and two chars
 * ** Pre-conditions: user string and two chars
 * ** Post-conditions: the frequancy of letters
 * ******************************************************************/
void frequancy(char* user_string[], int length)
{
	char user_letter1;
	char user_letter2;
	int freq_letter1 = 0;
	int freq_letter2 = 0;

	cout << "What two letters would you like to check the frequancy for? " << endl;
	cout << "Enter your first one: " << endl;
	cin >> user_letter1;
	cout << "Enter your other one: " << endl;
	cin >> user_letter2;

	for (int i = 0; i <= length; i++)
	{
		if (*user_string[i] == user_letter1)
		{
			freq_letter1 += 1;
		}
		else if (*user_string[i] == user_letter2)
		{
			freq_letter2 += 1;
		}
	}

	cout << "there are " << freq_letter1 << " " << user_letter1 << "'s in your string." << endl;
	cout << "and there are " << freq_letter2 << " " << user_letter2 << "'s in your string." << endl;
}

/******************************************************************
 * ** Function: switch_case
 * ** Description: switches lower and upper case in user entered string
 * ** Parameters: user entered string
 * ** Pre-conditions: user entered string
 * ** Post-conditions: user entered string with swapped cases
 * *******************************************************************/
void switch_case(char* user_string[], int length)
{
	char* copy_string = new char[50];
	copy_string = strcpy (copy_string, *user_string);

	for (int i = 0; i <= length; i++)
	{
		if (*user_string[i] > 96 && *user_string[i] < 123)
		{
			copy_string[i] -= 32;
		}
		else if (*user_string[i] > 64 && *user_string[i] < 91)
		{
			copy_string[i] += 32;
		}
	}

	cout << copy_string << endl;
}

int main()
{
	int length;
	char* user_string = new char[50];
	int n = 1;

	cout << "Welcome to the text surgeon!" << endl;
	cout << "Enter in your string: " << endl;
	cin.getline(user_string, 50);

	length = strlen(user_string);

	if (n <= 6 && n > 0)
		while (n < 6 && n > 0)
		{
			cout << "What would you like to do with your string?" << endl;
			cout << "(1) Compare Vowels vs Consonants" << endl;
			cout << "(2) Swap all of one letter to another letter" << endl;
			cout << "(3) Flip the string backwards" << endl;
			cout << "(4) Find the frequancy of a certain character" << endl;
			cout << "(5) Swap lowercase letters and uppercase letters" << endl;
			cout << "(6) Nothing. Quit the program" << endl;
			cout << "What is your choice: " << endl;
			cin >> n;

/*			cout << n << endl;

			cout << user_string << endl;
*/
			if (n == 1)
				vowel_vs_cons(&user_string, length);

			else if (n == 2)
				letter_swap(&user_string, length);
			
			else if (n == 3)
				flip_string(&user_string, length);
			
			else if (n == 4)
				frequancy(&user_string, length);
			
			else if (n == 5)
				switch_case(&user_string, length);
	
		}

		if (n == 6)
		{
			delete[] user_string;

			user_string = NULL;

			return 0;
		}
	else 
	{
		cout << "Invalid input. Try again" << endl;
		n = 1;
	}

}