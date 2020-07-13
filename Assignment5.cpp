/**********************************************************
** Program: Assignment5
** Author: Ben McFarland
** Date: March 3nd, 2020
** Description: 
***********************************************************/

#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 
#include <unistd.h>

using namespace std;

struct instrument 
{
	string name;
	string condition;
	float age;
	float value;
};

void add_location(char first_letter, short int l, short int h, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	while (h == 1)
	{
		if (l == 1)
		{
			chest1 = first_letter;
			h = 4;
			return;
		}
		else if (l == 2)
		{
			chest2 = first_letter;
			h = 4;
			return;
		}
		else if (l == 3)
		{
			chest3 = first_letter;
			h = 4;
			return;
		}
		else
		{
			return;
		}
	}

	while (h == 2)
	{
		if (l == 1)
		{
			chest4 = first_letter;
			h = 4;
			return;
		}
		else if (l == 2)
		{
			chest5 = first_letter;
			h = 4;
			return;			
		}
		else if (l == 3)
		{
			chest6 = first_letter;
			h = 4;
			return;		
		}
		else
		{
			return;
		}
	}

	while (h == 3)
	{
		if (l == 1)
		{
			chest7 = first_letter;
			h = 4;
			return;
		}
		else if (l == 2)
		{
			chest8 = first_letter;
			h = 4;
		}
		else if (l == 3)
		{
			chest9 = first_letter;
			h = 4;
			return;			
		}
		else
		{
			return;
		}
	}
}

void new_instrument(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short l;
	short h;
	instrument new_inst;
	string name;
	char first_letter;

	cout << "Where would you like to add an instrument?" << endl;
	cout << "What length out? (1, 2, or 3?)" << endl;
	cin >> l;
	cout << "What height down from the top? " << endl;
	cin >> h;

	cout << "What letter would you like to have represent your intrtument?" << endl;
	cin >> first_letter;

	cout << "What is the name of the instrument? " << endl;
	cin >> new_inst.name;

	cout << "What is the condition of the instrument? " << endl;
	cin >> new_inst.condition;

	cout << "What is the age of the instrument in years? " << endl;
	cin >> new_inst.age;

	cout << "What is the value in USD of your instrument? " << endl;
	cin >> new_inst.value;

	arr[l-1][h-1] = new_inst;

	add_location(first_letter, l, h, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);

}

void delete_instrument(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short l;
	short h;
	instrument del_instrument;
	char first_letter = '_';

	cout << "Where would you like to delete the instrument?" << endl;
	cout << "What length out? (1, 2, or 3?)" << endl;
	cin >> l;

	cout << "What height down from the top? (1, 2, or 3?)" << endl;
	cin >> h;

	arr[l-1][h-1] = del_instrument;

	add_location(first_letter, l, h, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
}

void change_instrument(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short l;
	short h;
	instrument change_instr;
	int option = 1;
	char first_letter;

	cout << "Where would you like to change the instrument?" << endl;
	cout << "What length out? (1, 2, or 3?)" << endl;
	cin >> l;

	cout << "What height down from the top? (1, 2, or 3?)" << endl;
	cin >> h;

	cout << "What do you want to change the letter in the chest to? " << endl;
	cin >> first_letter;

	change_instr = arr[l-1][h-1];

	cout << "Here is your current instrument:" << endl;
	cout << change_instr.name << endl;
	cout << change_instr.condition << endl;
	cout << change_instr.age << endl;
	cout << change_instr.value << endl;

	while (option < 6 && option > 0)
	{
		cout << "What would you like to change? " << endl;
		cout << "(1) Name" << endl;
		cout << "(2) Condition" << endl;
		cout << "(3) Age" << endl;
		cout << "(4) Value" << endl;
		cout << "(5) Back to main menu " << endl;
		cin >> option;

		if (option == 1)
		{
			cout << "What do you want to change the name to? " << endl;
			cin >> change_instr.name;
		}
		else if (option == 2)
		{
			cout << "What do you want to change the condition to? " << endl;
			cin >> change_instr.condition; 
		}
		else if (option == 3)
		{
			cout << "What do you want to change the age to? " << endl;
			cin >> change_instr.age; 
		}
		else if (option == 4)
		{
			cout << "What do you want to change the value to? " << endl;
			cin >> change_instr.value; 
		}
		else if (option == 5)
		{
			option = 0;
		}
		else
		{
			cout << "Invalid input, try again." << endl;
			option = 1;
		}

		arr[l-1][h-1] = change_instr;
	}

	add_location(first_letter, l, h, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
}

void create_rand_instrument(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short l;
	short h;
	char first_letter;

	cout << "Where would you like to add a random instrument?" << endl;
	cout << "What length out? (1, 2, or 3?)" << endl;
	cin >> l;

	cout << "What height down from the top? (1, 2, or 3?)" << endl;
	cin >> h;

	instrument rand_arr[6];

	rand_arr[0].name = "Trumpet";
	rand_arr[0].condition = "Mint";
	rand_arr[0].age = rand() % 10000;
	rand_arr[0].value = (float(rand() % 1800000) / 10 + 2.72);

	rand_arr[1].name = "Trombone";
	rand_arr[1].condition = "Good";
	rand_arr[1].age = rand() % 10000;
	rand_arr[1].value = (float(rand() % 1800000) / 10 + 1.45);

	rand_arr[2].name = "Violin";
	rand_arr[2].condition = "Mint";
	rand_arr[2].age = rand() % 10000;
	rand_arr[2].value = (float(rand() % 1800000) / 10 + 1.85);

	rand_arr[3].name = "Clarinet";
	rand_arr[3].condition = "Mint";
	rand_arr[3].age = rand() % 10000;
	rand_arr[3].value = (float(rand() % 1800000) / 10 + 1.29);

	rand_arr[4].name = "Saxiphone";
	rand_arr[4].condition = "Bad";
	rand_arr[4].age = rand() % 10000;
	rand_arr[4].value = (float(rand() % 1800000) / 10 + 1.11);

	rand_arr[5].name = "Guitar";
	rand_arr[5].condition = "Good";
	rand_arr[5].age = rand() % 10000;
	rand_arr[5].value = (float(rand() % 1800000) / 10 + 2.71);

	short rand_num;

	rand_num = rand() % 6;

	if (rand_num == 0)
		first_letter = 'T';

	else if (rand_num == 1)
		first_letter = 'T';

	else if (rand_num == 2)
		first_letter = 'V';

	else if (rand_num == 3)
		first_letter = 'C';

	else if (rand_num == 4)
		first_letter = 'S';

	else if (rand_num == 5)
		first_letter = 'G';

	else
		first_letter = '_';

	arr[l-1][h-1] = rand_arr[rand_num];

	add_location(first_letter, l, h, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);

}

void see_instrument(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short l;
	short h;
	short i = 1;
	short see_new;
	instrument see_instr;

	while (i == 1)
	{
		cout << "Where would you like to see the instrument?" << endl;
		cout << "What length out? (1, 2, or 3?)" << endl;
		cin >> l;

		cout << "What height down from the top? (1, 2, or 3?)" << endl;
		cin >> h;

		see_instr = arr[l-1][h-1];

		cout << "Here is your current instrument:" << endl;
		cout << see_instr.name << endl;
		cout << see_instr.condition << endl;
		cout << see_instr.age << endl;
		cout << see_instr.value << endl;

		cout << "See another instrument? (1 for yes or 2 for no)" << endl;
		cin >> see_new;

		i = see_new;
	}
}

void delete_all(instrument **arr, char& chest1, char& chest2, char& chest3, char& chest4, char& chest5, char& chest6, char& chest7, char& chest8, char& chest9)
{
	short to_del = 2;

	cout << "Are you sure you want to delete all? (1 is yes, 2 is no) " << endl;
	cin >> to_del;

	if (to_del == 1)
	{
		for (int i = 0; i < 3; i++) 
		{
	    	delete [] arr[i];
	    	arr[i] = NULL;
	    }

	    delete[] arr;
	    arr = NULL;

		chest1 = '_';
		chest2 = '_';
		chest3 = '_';
		chest4 = '_';
		chest5 = '_';
		chest6 = '_';
		chest7 = '_';
		chest8 = '_';
		chest9 = '_';	    
	}
	else 
	{
		cout << "Going back to main menu" << endl;
	}
}

int main()
{
	char chest1 = '_';
	char chest2 = '_';
	char chest3 = '_';
	char chest4 = '_';
	char chest5 = '_';
	char chest6 = '_';
	char chest7 = '_';
	char chest8 = '_';
	char chest9 = '_';

	short option = 0;

	cout << "Welcome to your instrument treasure chest!" << endl;

	instrument** arr = new instrument*[2];

  	for (int i = 0; i < 3; i++)
  	{
    	arr[i] = new instrument[2];
  	}

	while (option == 0)
	{

		cout << "Here is your treasure chest: " << endl;
		cout << endl;
		cout << "|" << chest1 << "||" << chest2 << "||" << chest3 << "|"<< endl;
		cout << "|" << chest4 << "||" << chest5 << "||" << chest6 << "|"<< endl;
		cout << "|" << chest7 << "||" << chest8 << "||" << chest9 << "|"<< endl;
		cout << endl;

		cout << "What would you like to do?" << endl;
		cout << "(1) Create a new instrument" << endl;
		cout << "(2) Delete an instrument" << endl;
		cout << "(3) Change an instrument" << endl;
		cout << "(4) Create a random instrument" << endl;
		cout << "(5) See an instrument" << endl;
		cout << "(6) Delete all instruments" << endl;
		cout << "(7) Quit program" << endl;
		cin >> option;

		if (option == 1)
		{
			new_instrument(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;
		}
		else if (option == 2)
		{
			delete_instrument(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;
		}
		else if (option == 3)
		{
			change_instrument(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;
		}
		else if (option == 4)
		{
			create_rand_instrument(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;
		}
		else if (option == 5)
		{
			see_instrument(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;
		}
		else if (option == 6)
		{
			delete_all(arr, chest1, chest2, chest3, chest4, chest5, chest6, chest7, chest8, chest9);
			option = 0;

		}
		else if (option == 7)
		{
			return 7;
		}
		else
		{
			cout << "Invalid input. Try again." << endl;
			option = 0;
		}
	}
	

	for (int i = 0; i < 3; i++) 
	{
    	delete [] arr[i];
    	arr[i] = NULL;
    }

    delete[] arr;
    arr = NULL;

	return 0;	
}