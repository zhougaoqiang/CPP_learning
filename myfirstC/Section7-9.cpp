#include "pch.h"
#include <iostream>
#include<cmath>
#include<array>
#include <string>

using namespace std;

struct travel_time
{
	int hours;
	int mins;
};
struct polar {
	double distance; //distance from orgin
	double angle;	//direction from orginin
};
struct rect {
	double x;
	double y;
};

//note: some implementations require double instead of long double 

long double probability(unsigned numbers, unsigned picks);
void lotto();

void arrfun2();
int sum_arr(int arr[], int n);

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
void arrfun3();

void arrfun4();
int sum_arr1(const int *begin, const int *end);

void strgfun();
unsigned int c_in_str(const char * str, char ch);

void strgback();
char *buildstr(char c, int n);

void travel();
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);
void strctptr();

/*
void topfive();
void display1(const string sa[], int n);
*/

const int Seasons = 4;
const array<string, Seasons> Snames = { "Spring","Summer", "Fall", "Winter" };
void arrobj();
void fill(array<double, Seasons> *pa);		// function to modify array object
void show(array<double, Seasons> da);	//function that uses array object without modifying it

const int Len = 66;
const int Divs = 6;
void ruler();
void subdivide(char ar[], int low, int high, int level);

void fun_ptr();
double betsy(int);
double pam(int);
void estimate(int lines, double(*pf)(int));
//second argument is pointer to a type double function that takes a type int argument

void arfupt();
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);


int main() 
{
	//lotto();
	//arrfun2();
	//arrfun3();
	//arrfun4();
	//strgfun();
	//strgback();
	//travel();
	//strctptr();
	//topfive();
	//arrobj();
	//ruler();
	//fun_ptr();
	//arfupt();
}

void lotto() {
	
	double total, choice;
	cout << "Enter the total number of choices on the game card and \n"
		<< "the number of picks allowed: \n";
	while ((cin >> total >> choice) && choice <= total)
	{
		cout << "you have one chance in ";
		cout << probability(total, choice); //compute the codes
		cout << " of winning. \n";
		cout << "Next two numbers (q to quit)�� ";
	}
	cout << "bye\n";
}
long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return result;
}

void arrfun2() {
	const int Arsize = 8;
	int cookies[Arsize] = { 1,2,3,4,5,6,7,8 };
	//some systems require preceding int with static to enable array initialization
	//ĳЩϵͳ��Ҫ��int֮ǰʹ��static�����������ʼ��

	cout << cookies << " = array address, ";
	//some system requires a type cast: unsighed (cookies)ĳЩϵͳ��Ҫ����ת��

	cout << sizeof cookies << " = sizeof cookies. \n";
	int sum = sum_arr(cookies, Arsize);
	cout << "total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "First three eaters ate: " << sum << "cookies.\n";
	sum = sum_arr(cookies + 4, 4);
	cout <<"Lasr four eaters ate: "<<sum<< "cookies.\n";
}
int sum_arr(int arr[], int n) { //return the sum of an integer array
	int total = 0;
	cout << arr << " = arr,";
	//some systems require a type cast: unsigned (arr)

	cout << sizeof arr << " = sizeof arr \n";
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

void arrfun3() {
	const int MAX = 5;
	double properties[MAX];

	int size = fill_array(properties, MAX);
	show_array(properties, size);
	if (size > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin>>factor)) //bad input
			{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
}
int fill_array(double ar[], int limit) {
	double temp;
	int i;

	for (i = 0; i < limit; i++) {
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin) //bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;

			cout << "Bad input: input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n) { //multiplies each element of ar[] by r
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}

void arrfun4() {
	const int arsize1 = 8;
	int cookies[arsize1] = { 1,2,4,8,16,32,64,128 };
	//some systems require preceding int with static to enable array initialization

	int sum = sum_arr1(cookies, cookies + arsize1);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr1(cookies, cookies + 3); //first 3 elements
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr1(cookies+4, cookies + 8); //last 4 elements
	cout << "Last 4 eaters ate " << sum << " cookies.\n";

}
int sum_arr1(const int *begin, const int *end) {
	const int *pt;

	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}

void strgfun() {
	char mmm[15] = "minimum"; //string in an array
	//some systems require preceding int with static to enable array initialization

	const char *wail = "ululate";		//wail points to string
	
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << "m characters in " << mmm << endl;
	cout << us << "u characters in " << wail << endl;

}
unsigned int c_in_str(const char * str, char ch) {
	unsigned int count = 0;
	while (*str)		//quit when *str is '\0';
	{
		if (*str == ch)
			count++;
		str++;	//move point yo next char
	}
	return count;
}

void strgback() {
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete[] ps;
}
char *buildstr(char c, int n) {	//build string made of n c characters
	char *pstr = new char[n + 1];
	pstr[n] = '\0';	//terminate string
	while (n-- > 0)
		pstr[n] = c;
	return pstr;

}

void travel() {
	
	travel_time day1 = { 5, 45 };
	travel_time day2 = { 4, 55 };

	travel_time trip = sum(day1, day2);
	cout << "Two-day total: ";
	show_time(trip);

	travel_time day3 = { 4, 32 };
	cout << "Three-day total: ";
	show_time(sum(trip, day3));
}
travel_time sum(travel_time t1, travel_time t2) {
	travel_time total;
	const int Mins_per_hr = 60;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = (t1.mins + t2.mins) / Mins_per_hr + t1.hours + t2.hours;

	return total;
}
void show_time(travel_time t) {
	cout << t.hours << " hours,"
		<< t.mins << " minutes.\n";
}

void strctptr() {
	rect rplace;
	polar pplace;
	cout << "Enter the x and y vaues: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace); //pass addresses
		show_polar(&pplace);				//pass address
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
}
void rect_to_polar(const rect *pxy, polar *pda) {   //convert rectangle to polar coordinates
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y*pxy->y);
	pda->angle = atan2(pxy->x,pxy->y);
}
void show_polar(const polar *pda) {
	const double rad_to_deg = 57.29577951;
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle;
}

/*
void topfive() {
	const int SIZE = 5;
	string list[SIZE];
	cout << "Enter your " << SIZE << "favorite astronomical sights: \n";
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}

	cout << "Your list: \n";
	display1(list, SIZE);
}
void display1(const string sa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": " << sa[i] << endl;
	}
}
*/

void arrobj() {
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
}
void fill(array<double, Seasons> *pa) {// function to modify array object
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}
void show(array<double, Seasons> da) {//function that uses array object without modifying it
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total expenses: $" << total << endl;
}

void ruler() {
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = '\0';

	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 0; i <= Divs; i++) {
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++) {
			ruler[j] = ' '; //reset to blank ruler
		}
	}
}
void subdivide(char ar[], int low, int high, int level) {
	if (level == 0)
		return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}

void fun_ptr() {
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Betsy's estimate: \n";
	estimate(code, betsy);
	cout << "Here's Pam's estimate: \n";
	estimate(code, pam);
}
double betsy(int lns) {
	return 0.05*lns;
}
double pam(int lns) {
	return 0.03*lns + 0.0004*lns*lns;
}
void estimate(int lines, double(*pf)(int)) {    //(*pf) is function pointer
	cout << lines << "lines will take: ";
	cout << (*pf)(lines) << " hour(s)\n";
}

void arfupt() {
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	//pointer to a function
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2; //c++11 automatic type deduction
	//pre-C++111 can use the following code instead
	// const double *(*p2) (const double *, int) = f2;
	cout << "Using pointers to functions: \n";
	cout << "Address   Value\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	//pa an array of pointers
	//auto doesn't work with list initialization
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	//but it does wotk for initiatlization to a single value
	//pb a pointer to first element of pa
	auto pb = pa;
	//pre-C++ can use the following code instead
	//const double *(**pb)(const double *, int) = pa;
	cout << "\nUsing an array of pointers to functions: \n";
	cout << "Address  Value\n";
	for (int i = 0; i < 3; i++) {
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}
	cout << "\nUsing an array of pointers to functions: \n";
	cout << "Address  Value\n";
	for (int i = 0; i < 3; i++) {
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	}

	//what about a pointer to an array of function pointers
	cout << "\nUsing an array of pointers to functions: \n";
	cout << "Address  Value\n";
	//easy way to declare pc
	auto pc = &pa;
	//pre-C++ can use the following code instead
	//const double *(*(*pc)[3])(const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//hard way to declare pd
	const double *(*(*pd)[3])(const double *, int) = &pa;
	//store return value in pdb
	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//alternative notation
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	//cin.get();
}
//some rater dull functions
const double * f1(const double * ar, int n) {
	return ar;
}
const double * f2(const double ar[], int) {
	return ar + 1;
}
const double * f3(const double ar[], int){
	return ar + 2;
}