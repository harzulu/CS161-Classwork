/*****************************************************
 *Program: Lab8_umbrellas 
 *Author: Benjamin McFarland 
 *Date: Feb. 24th, 2020
 ******************************************************/

#include <iostream>
#include <string>

using namespace std;

struct umbrella {

	float length;
	string color;

};

int main()
{
	float height;
	string color;
	int max_umb;

	umbrella arr[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "What is the height of umbrella " << i << ": " << endl;
		cin >> height;

		arr[i].length = height;

		cout << "What is the color of umbrella " << i << ": " << endl;
		cin >> color;

		arr[i].color = color;
	}
	max_umb = 0;

	for (int x = 1; x < 3; x++)
	{
		if (arr[x].length > arr[max_umb].length)
		{
			max_umb = x;
		}
	}

	cout << "The largest umbrella is umbrella " << max_umb + 1 << " with a height of " << arr[max_umb].length; 
	cout << ". And is the color " << arr[max_umb].color << "." << endl;

	return 0;
}