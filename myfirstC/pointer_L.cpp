#include "pch.h"
#include <iostream>

void pointerl();


void pointerl() {
	using namespace std;

	int updates = 7; //declare a variable
	int * P_updates; //declare pointer to an int
	P_updates = &updates; //assign address of int to pointer

	//experss values to two ways
	cout << "Values: updates = " << updates;
	cout << ", *P_updates = " << *P_updates << endl;

	//express address two ways
	cout << "Address: &updates = " << &updates;
	cout << ", *P_updates = " << P_updates << endl;

	//use pointer to change value
	*P_updates = *P_updates + 1;
	cout << "Now updates = " << updates << endl;
}