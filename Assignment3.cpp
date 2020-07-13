/*****************************************************
 *Program: Flight Annimator 
 *Author: Benjamin McFarland 
 *Date: Feb. 5th, 2020
 *Description: A program that annimates a flight with given data about the flight.
 *Input: Information about the flight.
 *Output: Information about the flight, and an annimation that shows the flight to scale.
 ******************************************************/
#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 
#include <unistd.h>

using namespace std;

/******************************************************************
 * ** Function: flight_cost_func
 * ** Description: solves for the cost per passenger of the flight.
 * ** Parameters: user entered values
 * ** Pre-conditions: values for flight fuel consumption and number of passengers
 * ** Post-conditions: a number for dollars per passenger for the flight
 * ******************************************************************/
float flight_cost_func(float fuel_burn_rate, float fuel_cost, unsigned int passengers, float flight_time_in, float flight_time_out)
{
	float total_gallons;
	float total_cost;
	float cost_per_pass;

	total_gallons = fuel_cost * (flight_time_out + flight_time_in);
	total_cost = total_gallons * fuel_cost;
	cost_per_pass = total_cost / passengers;
	return cost_per_pass;
}

/******************************************************************
 * ** Function: flight_out_speed
 * ** Description: Take in all of the information and calculate all of the information for the outbound flight.
 * ** Parameters: All of the information about the flight the user inputs
 * ** Pre-conditions: All values for the flight specifics
 * ** Post-conditions: The information about the leaving flight
 * ******************************************************************/
float flight_out_speed(float wind_speed, float flight_airspeed)
{
	float new_speed_out;
	if (wind_speed < 0)
	{
		new_speed_out = 1 - (wind_speed / 100);
		new_speed_out = new_speed_out * flight_airspeed;
		return new_speed_out;
	}
	else if (wind_speed > 0)
	{
		new_speed_out = 1 + (wind_speed / 100);
		new_speed_out = new_speed_out * flight_airspeed;
		return new_speed_out;
	}	
	else if (wind_speed == 0)
	{
		return flight_airspeed;
	}
	else 
	{
		return 1;
	}
}
/******************************************************************
 * ** Function: flight_in_speed
 * ** Description: Take in all of the information and calculate all of the information for the inbound flight.
 * ** Parameters: All of the information about the flight the user inputs
 * ** Pre-conditions: All values for the flight specifics
 * ** Post-conditions: The information about the return flight
 * ******************************************************************/
float flight_in_speed(float wind_speed, float flight_airspeed)
{
	float new_speed_in;
	if (wind_speed > 0)
	{
		new_speed_in = 1 - (wind_speed / 100);
		new_speed_in = new_speed_in * flight_airspeed;
		return new_speed_in;
	}
	else if (wind_speed < 0)
	{
		new_speed_in = 1 + (wind_speed / 100);
		new_speed_in = new_speed_in * flight_airspeed;
		return new_speed_in;
	}
	else if (wind_speed == 0)
	{
		return flight_airspeed;
	}
	else
	{
		return 1;
	}	
}

/******************************************************************
 * ** Function: flight_in_time
 * ** Description: Take in all of the information and calculate the time for the outbound flight.
 * ** Parameters: All of the information about the flight the user inputs
 * ** Pre-conditions: the distance and speed of flight
 * ** Post-conditions: The information about the leaving flight
 * ******************************************************************/
float flight_in_time(float flight_distance, float flight_speed_in)
{
	float flight_time;
	flight_time = flight_distance / flight_speed_in;
	return flight_time;
}

/******************************************************************
 * ** Function: flight_out_time
 * ** Description: Take in all of the information and calculate the time for the outbound flight.
 * ** Parameters: the information about the flight the user inputs
 * ** Pre-conditions: the distance and speed of flight
 * ** Post-conditions: The information about the leaving flight
 * ******************************************************************/
float flight_out_time(float flight_distance, float flight_speed_out)
{
	float flight_time;
	flight_time = flight_distance / flight_speed_out;
	return flight_time;
}

/******************************************************************
 * ** Function: flight_annimation_out
 * ** Description: The flight information and the annimation information.
 * ** Parameters: the information about the flight and annimation the user inputs
 * ** Pre-conditions: time of the flight and the annimation time.
 * ** Post-conditions: the annimation about the departing flight.
 * ******************************************************************/
void flight_annimation_out(float flight_time_out, unsigned int annimation_seconds)
{
	for (int x = 1; x <= flight_time_out; x++)
	{
		cout << "=>" << flush;
		sleep(annimation_seconds);
	}
	cout << endl;
}


/******************************************************************
 * ** Function: flight_annimation_in
 * ** Description: The flight information and the annimation information.
 * ** Parameters: the information about the flight and annimation the user inputs
 * ** Pre-conditions: time of the flight and the annimation time.
 * ** Post-conditions: the annimation about the arriving flight.
 * ******************************************************************/
void flight_annimation_in(float flight_time_in, unsigned int annimation_seconds)
{
	string annimation_in;
	string annimation_reset;
	for (int x = 1; x <= flight_time_in; x++)
	{
		annimation_in.append("<=");
		annimation_reset.append("  ");
	}

	for (int x = flight_time_in; x > 0; x--)
	{
  		cout << annimation_in << '\r' << flush;
  		sleep(annimation_seconds);
  		cout << annimation_reset << '\r' << flush;

  		if (!annimation_in.empty())
  		{
  			annimation_in.resize(annimation_in.size() - 2);
  		}
	}
	cout << endl;
}

int main()
{

	float flight_distance;
	float flight_airspeed;
	float wind_speed;
	float fuel_burn_rate;
	float fuel_cost;
	float flight_speed_in;
	float flight_speed_out;
	float flight_time_in;
	float flight_time_out;
	float flight_cost;
	//floats were for decimal values and negative values if the user would like, and to keep decimal values if that is what is being computed.
	unsigned int passengers;
	unsigned int annimation_seconds;
	//unsigned int because these are whole numbers that will have to be positive.

	cout << "Welcome to your flight annimator!" << endl;
	cout << "Enter your flight's distance in miles: " << endl;
	cin >> flight_distance;

	cout << "Enter your flight's air speed in mph: " << endl;
	cin >> flight_airspeed;

	cout << "Enter the wind speed in mph (positive values are from west to east, negative values are east to west): " << endl;
	cin >> wind_speed;

	cout << "Enter the plane's fuel burn rate in gallons per hour: " << endl;
	cin >> fuel_burn_rate;

	cout << "Enter the cost of fuel per gallon in dollars: " << endl;
	cin >> fuel_cost;

	cout << "Enter the number of passengers riding on your flight: " << endl;
	cin >> passengers;

	cout << "For your annimation: Enter the number of seconds per flight hour: " << endl;
	cin >> annimation_seconds;

	flight_speed_in = flight_in_speed(wind_speed, flight_airspeed);
	flight_speed_out = flight_out_speed(wind_speed, flight_airspeed);
	flight_time_in = flight_in_time(flight_distance, flight_speed_in);
	flight_time_out = flight_out_time(flight_distance, flight_speed_out);
	flight_cost = flight_cost_func(fuel_burn_rate, fuel_cost, passengers, flight_time_in, flight_time_out);

	cout << "Outbound flight speed: " << flight_speed_out << "mph." << endl;
	cout << "Inbound flight speed: " << flight_speed_in << "mph." << endl;

	cout << "Outbound flight time: " << flight_time_out << "hours." << endl;
	cout << "Inbound flight time: " << flight_time_in << "hours." << endl;

	cout << "Total cost per passenger: $" << flight_cost << "." << endl;

	cout << "Your outbound flight:" << endl;
	flight_annimation_out(flight_time_out, annimation_seconds);
	
	cout << "Your inbound flight:" << endl;
	flight_annimation_in(flight_time_in, annimation_seconds);

	return 0;

}