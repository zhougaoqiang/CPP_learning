//external.cpp -- external variables
//compile with support.cpp
#include "pch.h"
#include <iostream>
using namespace std;

//external variable
double warming = 0.3; //warming defined
//function prototypes
void update(double dt);
void local();

/*
int main() {	//use global variable
	cout << "Global warming is " << warming << "degrees. \n";
	update(0.1);  //call function to change warming
	cout << "Global warming is " << warming << "degrees. \n";
	local();		//call local warming
	cout << "Global warming is " << warming << "degrees. \n";
}
*/