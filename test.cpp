//-------------------------------------------------
//Program 6
//
//Author: Pengqi Yin
//
//The program will prompts user to input the
//wind speed (mile / hour), 
//and temperature (degree Fahrenheit)
//then outputs windchill factor
//
//The program will contain two functions:
//1. to get the user input
//2. to determine the windchill factor.
//--------------------------------------------------

//Here I include the header files iostream and string
#include <iostream>
#include <cmath>

//This statement allow me to use cin, cout, endl without std::
using namespace std;

//Declare variables
int windchill_factor;
int temperature;
int wind_speed;

void calculate_windchill_factor(int T, int v)
{
	//Calculate windchill factor
	windchill_factor = 35.74 + 0.6215 * T - 35.75 * pow(v, 0.16) + 0.4275 * T * pow(v, 0.16);
}

void input_statement()
{
	//Prompt user to input the values
	cout << "Enter wind speed in miles per hour: ";
	cin >> wind_speed;
	cout << endl;
	cout << "Enter temperature in degree Fahrenheit: ";
	cin >> temperature;
	cout << endl;
}

int main()
{
	//Call input function
	input_statement();

	//Call calculation function
	calculate_windchill_factor(temperature, wind_speed);

	//Outputs
	cout << "Current temperature: " << temperature << "F" << endl;
	cout << "Windchill factor: " << windchill_factor << "F" << endl;

	//Block execution and throw up a "Press any key to continue..." message
	system( "read -n 1 -s -p \"Press any key to continue...\"" );

	//return 0 for the main function to close function
	return 0;
}




















