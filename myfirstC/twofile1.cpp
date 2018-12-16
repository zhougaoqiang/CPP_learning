//teofile1.cpp -- variables with external and internal linkage
#include "pch.h"
#include<iostream>
#include<new>

int tom = 3;		//external variable definition
int dick = 30;		//external variable definition

static int harry = 300; //static, internal linkage
//function prototype

const int Arsize = 10;

const int BUF = 512;
const int N = 5;
char buffer[BUF];   //chunk of memory

void remote_access();
void twofile1();
void statictest();
void strcount(const char * str);

void newplace();

/*
int main() {
	// twofile1();
	//statictest();
	newplace();
}
*/
void twofile1() {
	using std::cout;

	cout << "main() reports the following addresses: \n";
	cout << "&tom = " << &tom << ", &dick = " << &dick;
	cout << ", &harry = " << &harry;
	remote_access();
}

void statictest() {
	using namespace std;

	char input[Arsize];
	char next;

	cout << "Enter a line: \n";
	cin.get(input, Arsize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')   //string didnot fit!
			cin.get(next); //dispose od remainder
		strcount(input);
		cout << "enter next line (expty line to quit): \n";
		cin.get(input, Arsize);
	}
	cout << "Bye.\n";
}
void strcount(const char * str) {
	using namespace std;
	static int total = 0; //static local variable
	int count = 0; // atuomatic local variable

	cout << "\"" << str << "\"contains ";
	while (*str++)   //go to end of string
		count++;
	total += count;

	cout << count << " characters\n";
	cout << total << " characters total\n";
}

void newplace() {
	using namespace std;
	double *pd1, *pd2;

	int i;
	cout << "Calling new and placement new: \n";
	pd1 = new double[N];   //use heap
	pd2 = new (buffer) double[N]; //use buffer array
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0*i;
	cout << "Memory addresses: \n" << "  heap: " << pd1
		<< "  static: " << (void *)buffer << endl;
	cout << "Memory contents: \n";
	for (i = 0; i < N; i++) {
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << "; ";
	}

	cout << "\nCalling new and placement new a second time: \n";
	double *pd3, *pd4;
	pd3 = new double[N];  //find a new address
	pd4 = new (buffer) double[N]; //overwrite old data
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0*i;
	cout << "Memory contents: \n";
	for (i = 0; i < N; i++) {
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << "; ";
	}

	cout << "\nCalling new and placement new a third time: \n";
	delete[] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0*i;
	cout << "Memory contents: \n";
	for (i = 0; i < N; i++) {
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << "; ";
	}
	delete[] pd1;
	delete[] pd3;
}