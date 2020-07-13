/**********************************************************
** Program: lab2_values.cpp
** Authors: Benjamin McFarland
** Date: 01/13/2020
** Description: Calculate min/max values.
***********************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int max_int;
	int min_int;
	max_int = pow(2, 31)-1;
	min_int = pow(2, 31);
	cout << max_int+1 << endl;
	cout << min_int-1 << endl;

	unsigned long int num_user;
	long int num_signed;
	unsigned long int num_unsigned_max;


	cout << "Enter a number of bits: " << endl;
	cin >> num_user;

	num_signed = pow(2, num_user-1);

	num_unsigned_max = pow(2, num_user)-1;

	cout << "The max singed value for " << num_user << " is " << num_signed-1 << "." << endl;
	cout << "The min singed value for " << num_user << " is -" << num_signed << "." << endl;
	cout << "The max unsinged value for " << num_user << " is " << num_unsigned_max << "." << endl;

	return 0;
} 
