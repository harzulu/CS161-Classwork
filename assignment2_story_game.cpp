/***************************************************** 
*Author: Benjamin McFarland 
*Date: Jan. 24th, 2020
*Description: A text based adventure game.
*Input: 1, 2, or 3 for user choices.
*Output: A crazy adventure.
******************************************************/

#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 

using namespace std;



int main()
{

	int main_choice;
	int car_gas;
	int car_route;
	int car_parking;
	int car_protest;
	int bike_train;
	int bike_construction;
	int bike_camp;
	int bus_drink;
	int bus_left;
	int bus_wrong;
	int bus_person;

	cout << "Welcome! In this game, you are an inner Portland resident, ";
	cout << " who needs to go meet with their friend in downtown. The only problem is.... you are extremely late.";
	cout << "You need to decide how you are going to get into downtown, that gets you there in one piece, and as soon as possible." << endl;
	cout << "------- Your current points: 0 -------" << endl;

	cout << "How do you think you should get there? (1)-Car, (2)-Bike, (3)-Bus: " << endl;
	cin >> main_choice;

	if (main_choice == 1)
	{
		cout << "------- Your current points: 10 -------" << endl;
		cout << "You decide to take your car. As you sit into your car, you realize that you seem a little low on gas, but you think you can make it ok." << endl;
		cout << "What do you do?" << endl;
		cout << "(1) Go fill your car with gas, then head to downtown." << endl;
		cout << "(2) Just head into downtown. " << endl;
		cin >> car_gas;

		if (car_gas == 1)
		{
			cout << "------- Your current points: 20 -------" << endl;
			cout << "After you get gas, you start to head towards downtown, but you realize it's rush hour. Which route do you take?" << endl;
			cout << "(1) Take the southern bridge." << endl;
			cout << "(2) Take the northern bridge. " << endl;
			cin >> car_route;

			if (car_route == 1)
			{
				cout << "You make it into downtown very fast! You skip most of traffic, and find a spot fast!" << endl;
				cout << "Your points: 30." << endl;
				return 0;
			}

			if (car_route == 2)
			{
				cout << "------- Your current points: 25 -------" << endl;
				cout << "As you approach the bridge, you see there is a protest blocking traffic." << endl;
				cout << "Do you:" << endl;
				cout << "(1) Wait out the protest." << endl;
				cout << "(2) Just go home" << endl;
				cin >> car_protest;

				if (car_protest == 1)
				{
					cout << "You end up waiting for hours and spend the rest of your day waiting in traffic." << endl;
					cout << "Your points: 15" << endl;
					return 0;
				}

				if (car_protest == 2)
				{
					cout << "You just turn around and head home..." << endl;
					cout << "Your points: 25." << endl;
					return 0;
				}
			}

			else
			{
				cout << "Invalid answer. Needs to be 1 or 2." << endl;
				return 0;
			}
		}

		if (car_gas == 2)
		{
			cout << "------- Your current points: 15 -------" << endl;
			cout << "You easily get into downtown, but now you have to park your car. Where do you try and park?" << endl;
			cout << "(1) Go to the parking garage and pay to park." << endl;
			cout << "(2) Go try and find parking on the side of the street. " << endl;
			cin >> car_parking;

			if (car_parking == 1)
			{
				cout << "You run out of gas going up the parking garage... You need to tow your car and can't see your friend..." << endl;
				cout << "Your points: 10" << endl;
				return 0;
			}

			if (car_parking == 2)
			{
				cout << "You run out of gas while looking for parking... You need to tow your car and can't see your friend..." << endl;
				cout << "Your points: 10" << endl;
				return 0;
			}
		}

		else
		{
			cout << "Invalid answer. Needs to be 1 or 2." << endl;
			return 0;
		}
	}

	else if (main_choice == 2)
	{
		cout << "------- Your current points: 20 -------" << endl;
		cout << "As you start heading to downtown on your bike, you begin to approach construction. Do you:" << endl;
		cout << "(1) Try and bike through the construction." << endl;
		cout << "(2) Try and find another route. " << endl;
		cin >> bike_construction;
	 
	 	if (bike_construction == 1)
		{
			cout << "------- Your current points: 30 -------" << endl;
			cout << "You easily breeze through the construction, but you approach the train tracks, and there is a train coming! What do you do?" << endl;
			cout << "(1) Try and cross the tracks in time before the train." << endl;
			cout << "(2) Wait for the train to pass. " << endl;
			cin >> bike_train;

			if (bike_train == 1)
			{
				cout << "You get hit by the train and die..." << endl;
				cout << "Your score is 30" << endl;
				return 0;
			}

			if (bike_train == 2)
			{
				cout << "------- Your current points: 45 -------" << endl;
				cout << "After the train passes, you get close to downtown, but you approach a homeless camp. Do you:" << endl;
				cout << "(1) Attempt to bike through the camp." << endl;
				cout << "(2) Go around the block. " << endl;
				cin >> bike_camp;

				if (bike_camp == 1)
				{
					cout << "You quickly pass through the camp and get to your friend really fast!" << endl;
					cout << "Your score: 60 " << endl;
					return 0;
				}

				if (bike_camp == 2)
				{
					cout << "You end up getting lost in the structure of the streets there, and get cought in traffic, and you miss your friend..." << endl;
					cout << "Your score is: 45 " << endl;
					return 0;
				}

				else
				{
					cout << "Invalid answer. Needs to be 1 or 2." << endl;
					return 0;
				}
			}

			else
			{
				cout << "Invalid answer. Needs to be 1 or 2." << endl;
				return 0;
			}
		}

		if (bike_construction == 2)
		{
			cout << "You completely got lost biking all around town and have to go back home when it gets dark..." << endl;
			cout << "You score is 10" << endl;
			return 0;
		}

		else
		{
			cout << "Invalid answer. Needs to be 1 or 2." << endl;
			return 0;
		}
	}
	 	
	else if (main_choice == 3)
	{

		cout << "------- Your current points: 5 -------" << endl;
		cout << "As you are walking to the bus stop, you notice you are quite thirsty... Do you:" << endl;
		cout << "(1) Stop at Plaid Pantry on the way." << endl;
		cout << "(2) Just go to the bus. " << endl;
		cin >> bus_drink;

		if (bus_drink == 1)
		{
			cout << "------- Your current points: 10 -------" << endl;
			cout << "As you are heading back to the bis stop you notice the bus is leaving... What do you do?" << endl;
			cout << "(1) Chase after the bus." << endl;
			cout << "(2) Wait for the next bus" << endl;
			cin >> bus_left;

			if (bus_left == 1)
			{
				cout << "You look like an absolute fool, and get hit by a car and die." << endl;
				cout << "Your score is 10" << endl;
				return 0;
			}

			if (bus_left == 2)
			{
				cout << "You end up waiting too long and get to downtown too late..." << endl;
				cout << "Your score is 15" << endl;
				return 0;
			}

			else
			{
				cout << "Invalid answer. Needs to be 1 or 2." << endl;
				return 0;
			}
		}

		if (bus_drink == 2)
		{
			cout << "------- Your current points: 20 -------" << endl;
			cout << "After the bus leaves you realize you got onto the wrong bus... What do you do?" << endl;
			cout << "(1) Get off at the next stop, and walk back to the correct bus." << endl;
			cout << "(2) Take the bus to the closes stop, then get onto a different bus. " << endl;
			cin >> bus_wrong;

			if (bus_wrong == 1)
			{
				cout << "As you are walking back, you get jumped and loose all of your money and can't get a new bus pass..." << endl;
				cout << "Your score is 20" << endl;
			}

			if (bus_wrong == 2)
			{
				cout << "------- Your current points: 30 -------" << endl;
				cout << "As you are walking to the other bus, you notice a suspicious person following you.... Do you" << endl;
				cout << "(1) Just go onto the bus like normal." << endl;
				cout << "(2) Try and lose the person. " << endl;
				cin >> bus_person;

				if (bus_person == 1)
				{
					cout << "You get on the bus, and nothing happens you get to your friend no problem!" << endl;
					cout << "Your score is 50" << endl;
					return 0;
				}

				if (bus_person == 2)
				{
					cout << "You end up accidentally wakling down a dead end street and the guy stabs and kills you." << endl;
					cout << "Your score is 30" << endl;
					return 0;

				}
			}

			else
			{
				cout << "Invalid answer. Needs to be 1 or 2." << endl;
				return 0;
			}
		}

		else
		{
			cout << "Invalid answer. Needs to be 1 or 2." << endl;
			return 0;
		}
	}

	else
	{
		cout << "Invalid answer. Needs to be 1, 2, or 3." << endl;
		return 0;
	}

	return 0;

}