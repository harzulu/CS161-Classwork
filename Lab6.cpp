/*****************************************************
*Program: lab6_ref 
*Author: Benjamin McFarland 
*Date: Feb. 10th, 2020
*Description:
*Input:
*Output:
******************************************************/
 
#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 
#include <unistd.h>
  
using namespace std;

void get_string(string& s)
{
	cout << "Enter a phrase, all lower case, no punctuation: " << endl;
	getline (cin,s);
}

void hide_letters(string s, string& hidden)
{
	int string_length;
	string_length = s.length();
	int y = 0;

	for (int x = 1; x <= string_length; x++)
	{
		if (s[y] >= 97 && s[y] <= 122)
		{
			hidden.append("*");
			y++;
		}
		else if (s[y] == 32)
		{
			hidden.append(" ");
			y++;
		}
		else
		{
			y++;
		}
	}
}



int main()
{
	string s;
	string hidden;
	get_string(s);
	cout << s << endl;

	for (int x = 1; x < 50; x++)
	{
		cout << "                                                       " << endl;
	}

	hide_letters(s, hidden);

	cout << hidden << endl;

	return 0;

}