/*
	C++ComparingstringObjects.cpp : Defines the entry point for the console application.
	This program uses relational operators to compare a string
	entered by the user with valid stereo part numbers.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	const double	Price_A = 249.0,
					Price_B = 299.0;

	string partNumb;	// Holds a stereo part number

	//----Display available parts and get the user's selection------

	cout	<< "The stereo part numbers are: \n"
			<< "Boom Box: part number S-29A \n"
			<< "Shelf Model: part number S-29B \n"
			<< "Enter the part number of the stereo you \n"
			<< "wish to purchase: ";
	cin		>> partNumb;

	//----Set the numeric output formatting

	cout << fixed << showpoint << setprecision(2);

	//----Determine and display the correct price------------------
	if (partNumb == "S-29A")
		cout << "The price is $" << Price_A << endl;
	else if (partNumb == "S-29B")
		cout << "The price is $" << Price_B << endl;
	else
		cout << partNumb << " is not a valid part number. \n";
    return 0;
}

