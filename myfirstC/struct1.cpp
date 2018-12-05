//structur.cpp -- a simple structure
#include "pch.h"
#include <iostream>

void structur();

struct inflatable //structure declaration
{
	char name[20];
	float volumn;
	double price;
};

int main() {
	structur();
}

void structur() {

	using namespace std;

	inflatable guest = {
		"Glorious Gloria",  //name value
		1.88,				//volumn value
		29.99				// price value
	};   //guest is a structure variable of type inflatable

	inflatable pal = {
		"Audacious Arthur",  //name value
		3.12,				//volumn value
		32.99				// price value
	};	//pal is a second varioable of type inflatable
	//NOTE: some implementations require using:
	// static inflatable guest =

	cout << "Expand your guest list with" << guest.name;
	cout << " abd " << pal.name << "!\n";
	//pal.name is the name member of the pal variable
	cout << "you can have both for $";
	cout << guest.price + pal.price << "!\n";
}