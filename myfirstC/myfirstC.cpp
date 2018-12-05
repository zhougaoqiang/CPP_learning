// myfirstC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cmath>
#include<climits>
#include<cstring> //for the strlen() function
#include<string>

#define ZERO 0; //makes zero symbol for 0 value

struct inflatable //structure declaration
{
	char name[20];
	float volumn;
	double price;
};



void dIsplayname();//function prototype for simon()
void q2();
void q3();
void limits();
void exceed();
void hexoct();
void morechar();
void bondini();
void floatnum();
void typecast();
void string1();
void instr2();
void instr3();
void numstr();
void structur();

int main()
{

	//dIsplayname();
	//q2();
	//q3();
	//limits();
	//exceed();
	//hexoct();
	//morechar();
	//bondini();
	//floatnum();
	//typecast();
	//string1();
	//instr2();
	//instr3();
	//numstr();
	structur();
}

void dIsplayname() {
	std::cout << "zhou gaoqiang， " << "at Sim Ming Ave." << std::endl;
}
void q2() {
	using namespace std;

	long n;
	cout << "请输入一个数字： " << endl;
	cin >> n;

	cout << n << "等于" << n * 220 << "码" << endl;

}
void q3() {
	using namespace std;
	cout << "请输入您的年龄：" << endl;
	
	int n;
	cin >> n;

	cout << "您已经活了" << n*12 << "个月" << endl;

}
void limits() {
	using namespace std;

	int n_int = INT_MAX; //initialize n_int to max int value
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//sizeof operaor yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl<<endl;

	cout << "Minimun int value = " << INT_MIN << endl;
	cout << "bits per byte = " << CHAR_BIT << endl;
}
void exceed() {
	
	using namespace std;

	short sam = SHRT_MAX;  //initialize a variable to max value
	unsigned short sue = sam; //okay if variable sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposted." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposted." << endl
		<< "Take $1 to each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl<<"Lucky Sue!"<<endl;

}
void hexoct() {
	using namespace std;

	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " 42 in decimal\n";
	cout << "waist = " << waist << " 0x42 in hex\n";      //hex
	cout << "inseam = " << inseam << " 042 in octal\n";  //oct
}
void morechar() {
	using namespace std;

	char ch = 'M'; //assign ASCII code for M to ch
	int i = ch;//store same code in an int
	cout << "the ASCII code for " << ch << " is " << i << endl;

	//using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(109);

	//using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;
	
}
void bondini() {
	using namespace std;

	cout << "\aOperation \"HyperHype\" is now activiated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3! \n";
}
void floatnum() {
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
	float tub = 10.0 / 3.0; //good to about 6 places;
	double mint = 10.0 / 3.0; //good to about 15 places;
	const float million = 1.0e6; 

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million*tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
}
void typecast() {
	using namespace std;

	int auks, bats, coots;
	//the following statement adds the values as double,
	//then converts the result to int
	auks = 19.99 + 11.99;

	//this statements add values as int
	bats = (int)19.99 + (int)11.99; //old C syntax
	coots = int(19.99) + int(11.99); //new C++ syntax
	cout << "auts = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'z';
	cout << "the code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; //using static cast
}
void string1() {
	using namespace std;

	const int Size = 15;
	char name1[Size];				//empty array
	char name2[Size] = "C++owboy";	//initialized array
	//note: some implementations may require the static keyword
	//to initialized the array name2

	cout << "Howdy! I'm " << name2;
	cout << "! what's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';			//set to null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
}
void instr2() {
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: \n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
}
void instr3() {
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert: \n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
}
void numstr() {

	using namespace std;

	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?\n";

	char address[80];
	cin.getline(address, 80);
	cout << "year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done! \n";
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













// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
