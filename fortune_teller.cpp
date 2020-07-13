/*****************************************************
 *Program: Fortune Teller 
 *Author: Benjamin McFarland 
 *Date: Jan. 9th, 2020
 *Description: A fortune teller using 5 user provided numbers.
 *Input: 5 numbers
 *Output: Some crazy cat fortunes
 ******************************************************/
#include <iostream>

using namespace std;

int main() 
{
	unsigned short int year;
// i chose unsigned short int because this number would hypothetically be adding to 2020 so i need it to add, not subtract if it was negative.
// the min value is 0, and the max is 65535
	unsigned short int day;
// i chose unsigned short int because this will be a number between 0 and 30 so it will be small and positive.
// this is also 0 to 65535
	unsigned long int cat_remember;
//this i chose signed short to really make this funny if the user decides to go crazy on this number.
//This value can range from -2,147,483,648 to 2,147,483,647
	float pet_percent;
//For this, i decides to just let the user go as crazy as they would like, and they can add decimals if they choose because this value can be a decimal.
//this value can range from 1.17549e-38 to  3.40282e+38
	float cats;
//this value is also here for comedic purposes and i made it float so it can be a crazy value also
//this also ranges from 1.17549e-38 to  3.40282e+38

	cout << "Enter a number between 0 and 500. ";
	cin >> year;

	cout << "Enter a number between 1 and 30. ";
	cin >> day;

	cout << "Enter any integer. ";
	cin >> cat_remember;

	cout << "Enter any number with at least one decimal. ";
	cin >> pet_percent;

	cout << "Enter enter the craziest number you can. ";
	cin >> cats;

	cout << "---------------------------------------------------------------------" << endl;

	cout << "In " << year << " years, you will pet " << cats << " cats." << endl;

	cout << day << " days later, only " << cat_remember << " cats will remember you." << endl;

	cout << "It's ok though, because all of the cats would rate your petting skills as " << pet_percent << " out of " << pet_percent*1.2 << "!" << endl;

	cout << "---------------------------------------------------------------------" << endl;

  return 0;
}

