/***************************************************** 
*Author: Benjamin McFarland 
*Date: Jan. 24th, 2020
*Description: A program that generates a password with given aspects
*Input: Number of characters, number of letters, and number of uppercase letters
*Output: A password with the given aspects
******************************************************/

#include <iostream>
#include <string>
#include <ctime> /*include to allow time() to be used*/
#include <cstdlib> /* include to allow rand() to be used */

using namespace std;

int main() 
{
	srand(time(NULL));

	int p;
	int l;
	int ll;
	int ul;
	int n;
	string password = "";

	cout << "How long do you want your password in caracters? ";
	cin >> p;

	while (p <= 0)
	{
		cout << p << " is an invalid value. Make sure it is greater than 0." << endl;
		cout << "How long do you want your password to be in characters? ";
		cin >> p;
	}


	cout << "How many letters do you want? (Out of " << p << "). ";
	cin >> l;
	

	while (l > p || l < 0)
	{
		cout << l << " is an invalid value. Make sure it is less than or equal to " << p << endl;
		cout << "How many letters do you want? (Out of " << p << "). ";
        	cin >> l;
	}

	n = p - l;
	
	cout << "How many of " << l << " letters do you want to be upercase? ";
	cin >> ul;

	while(ul > l || ul < 0)
	{
		cout << ul << " is an invalid value. Make sure it is less than " << l << endl;
		cout << "How many of " << l << " letters do you want to be uppercase? ";
		cin >> ul;
	}

	ll = l - ul;

	cout << "So your password will be out of " << p << " characters. With " << l << " letters. " << ul << " uppercase, and " << ll << " lower case. And " << n << " numbers." << endl;

	int r;
	int rn;

	for (int upp = 0; upp < ul; upp++)
	{
		r = rand() % 26;
		char cu = 'A' + r;
		password += cu;
	}
	for (int loww = 0; loww < ll; loww++)
	{
		r = rand() % 26;
		char cl = 'a' + r;
		password += cl;				
	}	

	for (int num = 0; num < n; num++)
	{
		rn = rand() % 9;
		int numb = rn;
		password += numb;
	}

	cout << password << " is your password!" << endl;

	return 0;
}
