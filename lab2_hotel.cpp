#include <iostream>
#include <ctime> /*include to allow time() to be used*/ 
#include <cstdlib> /* include to allow rand() to be used */

using namespace std;
/*
int main()
{
	int x;  variable to hold our random integer 
	srand(time(NULL));  seed the random number generator 
	x = rand();
	cout << "x = " << x << endl;
	x = rand();
	cout << "x = " << x << endl;
	return 0;
} 
*/
int main()
{

	int floor;
	srand(time(NULL));
	floor = rand() % 6;

	cout << floor << endl;

	if (floor == 0)
	{
		cout << "You are on the ground floor" << endl;
	}
	else if ((floor % 2) == 1)
	{
		cout << "You are on an odd floor" << endl;
		if (floor == 5)
		{
			cout << "You are the penthouse!" << endl;
		}
	}
	else
	{
		cout << "You are on an even floor" << endl;
	}

	return 0;
}
