//file2.cpp -- contains functions called in file1.cpp
#include "pch.h"
#include <iostream>
#include <cmath>
#include "coordin.h"     //structure templates, function prototyes

//convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;

	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;   // return a polar structure
}

//show polar coordinates, converting angle to degrees
void show_polar(polar dapos) {
	using namespace std;

	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees. \n";
}

void autotest () {
	using namespace std;
	int texas = 31;
	int year = 2011;
	cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", &year = " << &year << endl;

	oil(texas); 
	cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", &year = " << &year << endl;
}
void oil(int x) {
	using namespace std;
	int texas = 5;
	cout << "In oil(), texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In oil(), x = " << x << ", &x = " << &x << endl;
	{
		int texas = 113;
		cout << "In block(), texas = " << texas << ", &block = " << &texas << endl;
		cout << "In block(), x = " << x << ", &x = " << &x << endl;
	}

	cout << "Post-block texas = " << texas << ", &texas = " << &texas << endl;
}