//teofile2.cpp -- variables with internal and external linkage
#include "pch.h"
#include<iostream>

extern int tom;					//tom defined elsewhere
static int dick = 10;			//override external dick
int harry = 200;				//external variable definition.
								// no conflict with twofile harry

void remote_access()
{
	using std::cout;
	cout << "\n";
	cout << "remote_access() reports the following addresses: \n";
	cout << "&tom = " << &tom << ", &dick = " << &dick;
	cout << ", &harry = " << &harry;
}
