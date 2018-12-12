// myfirstC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cmath>
#include<climits>
#include<cstring> //for the strlen() function
#include<string>
#include<vector>;
#include<array>;
#include<ctime>;
#include<cctype>;
#include<fstream>;
#include<cstdlib>;

#define ZERO 0; //makes zero symbol for 0 value

struct inflatable //structure declaration
{
	char name[20];
	float volumn;
	double price;
};
struct antarctica_years_end {
	int year;
	int month;
	int date;
	/*some really interesting data, etc. */
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
void pointerl();
void strtype3();
void uSEnEW();
void arraynew();
void newstrct();
char *getname(void); 
void deleteyanshi();
void mixtypes();
void choices();
void express();
void forstr2();
void while1();
void waiting();
void dowhile();
void textin2();
void textin3();
void nested();
void ifelse();
void cctypes();
void switchTest();
void switchTestshowmanu1();
void switchTestreport1();
void switchTestcomfort1();
void enumtest();
void jump();		//break and continue
void cingolf();
void outfile();
void sumafile();

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
	//structur();
	//strtype3();
	//pointerl();
	//uSEnEW();
	//arraynew();
	//newstrct();
	//deleteyanshi();
	//mixtypes();
	//choices();
	//express();
	//forstr2();
	//while1();
	//waiting();
	//dowhile();
	//textin2();
	//textin3();
	//nested();
	//ifelse();
	//cctypes();
	//switchTest();
	//enumtest();
	//jump();
	//cingolf();
	//outfile();
	sumafile();
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
	cout << ", P_updates = " << P_updates << endl;

	//use pointer to change value
	*P_updates = *P_updates + 1;
	cout << "Now updates = " << updates << endl;
};
void strtype3() {

	using namespace std;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	//assignment for string objects and character arrays
	str1 = str2;			//copy str2 to str1
	strcpy_s(charr1, charr2); //copy charr2 to charr1

	//appending for string objects and character arrays
	str1 += " paste"; //obtain length of str1
	strcat_s(charr1, " juice"); //add juice to end of charr1

	//find the length of a string object and a C-style string
	int len1 = str1.size(); //obtain length of str1
	int len2 = strlen(charr2); //obtain length of charr1

	cout << "The string " << str1 << " contains"
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains"
		<< len2 << " characters.\n";
};
void uSEnEW() {
	using namespace std;

	int nights = 1001;
	int *pt = new int; //allocate space for an int
	*pt = 1001;			//store a value there
	
	cout << "nights value = ";
	cout << nights << ": location" << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	double *pd = new double; //allocate space for a double
	*pd = 10000001.0;		//store a value there

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt" << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
};
void arraynew() {
	double *p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	std::cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;		//increment the pointer
	std::cout << "Now p3[0] is " << p3[0] << " and ";
	std::cout<< "p3[1] is "<<p3[1]<< ".\n";
	p3 = p3 - 1; //point back to beginning
	delete[] p3;  //free the memory
};
void newstrct() {
	using namespace std;

	inflatable *ps = new inflatable; //allot memory for structure
	cout << "enter your name of inflatable item: ";
	cin.get(ps->name, 20);	//method 1 for member access
	cout << "enter volumn in cubic feet: ";
	cin >> (*ps).volumn; //method 2 for member access
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl; //method 2
	cout << "Volumn: " << ps->volumn << " cubic feet\n"; //method 1
	cout << "price: $" << ps->price << endl;//method 1
	delete ps;

};
void deleteyanshi() {
	using namespace std;
	char *name; // create pointer but no storage
	name = getname(); //assign address of string to name
	cout << name << " at " << (int *)name << "\n";
	delete[] name; //memory freed

	name = getname(); //reuse freed memory
	cout << name << " at " << (int *)name << "\n";
	delete[] name; //memory freed
};
char *getname() { //return pointer to new string
	char temp[80]; //temporary stroage
	std::cout << "Enter last name: ";
	std::cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy_s(pn, strlen(temp) + 1, temp); //copy string into smaller space
	return pn; // temp lost when function ends
}
void mixtypes() {
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end *pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3]; //array of 3 structure
	trio[0].year = 2000;
	std::cout << trio->year << std::endl;
	const antarctica_years_end *arp[3] = { &s01,&s02, &s03 };
	std::cout << arp[1]->year << std::endl;
	const antarctica_years_end ** ppa = arp;
	auto ppb = arp; //C++11 automatic type deduction
	//or elase use const antarctica_years_end ** ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb + 1))->year << std::endl;
};
void choices() {
	using namespace std;

	double a1[4] = { 1.2, 2.4, 3.6, 4.8 }; //C, orginal C++
	vector <double> a2; //create vector with 4 elements
	//no simple way to initialize in C98

	a2[0] = 1.0/3.0;
	a2[1] = 1.0/5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	//C++11 -- create and initialize array object
	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
	array<double, 4> a4;
	a4 = a3; //valid for array objects of same size
	//use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[0] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
};
void express() {
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);     // newer C++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
};
void forstr2() {
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	//physically modify string object
	char temp;
	int i,j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}		//end block
	cout << word << "\n Done\n";
	
	char wos[5] = "?ate";
	for (char ch = 'a'; strcmp(wos, "mate"); ch++) {
		cout << wos << endl;
		wos[0] = ch;
	}
	cout << "After loop ends, word is " << wos << endl;
}
void while1() {
	const int ArSize = 20;
	using namespace std;
	char name[ArSize];
	cout << "Enter your first name please: ";
	cin >> name;
	cout << "Here is your name,verticalized and ASCIIized: \n";
	int i = 0;						//start at beginning of string
	while (name[i] != '\0')			//process to end of string
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++; //dont forget this loop
	}
}
void waiting() {
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; //convert to clock ticks
	cout << "starting \a\n";
	clock_t start = clock();

	while (clock() - start < delay)		//wait until time elapses
		;								//note the semicolon
	cout << "done \a\n";
}
void dowhile() {
	using namespace std;

	int n;

	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes, 7 is my faviorite. \n";
}
void textin2() {
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit: \n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch); //use it again
	}
	cout << endl << count << "charachters read\n";
}
void textin3() {
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch); //attempt to read a char
	while (cin.fail() == false) //test for EOF
	{
		cout << ch;   //echo character
		++count;
		cin.get(ch); //attempt to read another char
	}
	cout << endl << count << "characters read \n";
}
void nested() {
	using namespace std;

	const int Cities = 5;
	const int Years = 4;

	const char *cities[Cities] =    //array of pointers
	{								// to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] = //2-d array
	{
	{96,100,87,101,105},	//value for maxtemps[0]
	{96,98,91,107,104},
	{97,101,93,108,107},
	{98,103,95,109,108}
	};

	cout << "Maximum temperatures for 2008 -2011\n\n";
	for (int city = 0; city < Cities; ++city) {
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year) {
			cout << maxtemps[year][city] << "\t";
		};
		cout << endl;
	}
}
void ifelse() {

	using namespace std;
	char ch;
	cout << "Type, and shall repeat.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;			//当变为ch+1的时候，输出值为int
		cin.get(ch);
	}
	//try ch + 1 instead of ++ch for interesting effect
	cout << "\nPlease excuse the slight confusion.\n";
		//cin.get()
		//cin.get()
}
void cctypes() {
	using namespace std;
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";

	char ch;
	int whitespace = 0;
	int	digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	
	cin.get(ch);			//get first character
	while (ch != '@')		//test for sentinel
	{
		if (isalpha(ch))	//is it an alphabetic character
			chars++;		
		else if (isspace(ch))	//is it a whitespace character?
			whitespace++;
		else if (isdigit(ch))	// is it a digit?
			digits++;
		else if (ispunct(ch))	// is it punctuation?
			punct++;
		else
			others++;
		cin.get(ch);			//get next character
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";
}
void switchTest() {
	using namespace std;
	switchTestshowmanu1();
	int choice;
	cin >> choice;
	while (choice != 5) 
	{
		switch (choice)
		{
		case 1: cout << "\a\n";
			break;
		case 2: switchTestreport1();
			break;
		case 3: switchTestcomfort1();
			break;
		case 4: switchTestcomfort1();
			break;
		default: cout << "That's not a choice.\n";
		}
		switchTestshowmanu1();
		cin >> choice;
	}
	cout << "Bye!\n";


}
void switchTestshowmanu1() {
	std::cout << "Please enter 1, 2, 3, 4, or 5: \n"
		"1) Alarm				2) Report\n"
		"3) Alibi				4) Comfort\n"
		"5) Quit\n";
}
void switchTestreport1() {
	std::cout << "It's been an excellent week for buiness.\n"
		"Sales are up 120%. Expense are down 35%.\n";
}
void switchTestcomfort1() {
	std::cout << "Your employees think you are the finest CEO\n"
		"in the industry. The board of directors think\n"
		"you are the finest CEO in the industry.\n";
}
void enumtest() {
	using namespace std;

	enum {red, orange, yellow, green, blue, violet, indigo};  //create named constants for 0-6

	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red: cout << "Her lips were red.\n"; break;
		case orange: cout << "Her hair was orange.\n"; break;
		case yellow: cout << "Her shoes were yellow.\n"; break;
		case green: cout << "Her nails were green.\n"; break;
		case blue: cout << "Her sweatsuit was blue.\n"; break;
		case violet: cout << "Her eyes were redviolet.\n"; break;
		case indigo: cout << "Her mood were indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
}
void jump() {
	const int ArSize = 80;

	using namespace std;
	char line[ArSize];
	int space = 0;

	cout << "Enter a line of text: \n";
	cin.get(line, ArSize);

	cout << "complete line: \n" << line << endl;
	cout << "Line through first period: \n";

	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i]; //display character
		if (line[i] == '.')   //quit if it's a period
			break;
		if (line[i] != ' ')   // skip rest of loop
			continue;
		space++;
	}
	cout << "\n" << space << "spaces\n";
	cout << "Done.\n";
}
void cingolf() {
	const int max = 5;
	int golf[max];
	using namespace std;
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << max << " rounds.\n";
	int i;
	for (i = 0; i < max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue; //get rid of bad input
			cout << "Please enter a number: ";
		}
	}

	//calculate average
	double total = 0.0;
	for (i = 0; i < max; i++)
		total += golf[i];
	//report results
	cout << total / max << " = average score"
		<< max << " rounds\n";
}
void outfile() {
	using namespace std;
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile; //create object for output
	outFile.open("carinfo.txt"); //associate with a file

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//display information on screen with cout
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	//now do exact same thing using outFile instead of cout
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();	//done with file
}
void sumafile() {
	using namespace std;
	const int SIZE = 60;
	char filename[SIZE];

	ifstream inFile; //object for handling file input
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename); //associate inFile with a file
	if (!inFile.is_open()) //failed to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;		//number od items read

	inFile >> value; //get first value 
	while (inFile.good()) //while input good and not at EOF
	{
		++count;	//one more item read
		sum += value;	//calculate running total
		inFile >> value; //get next value
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	if (count == 0)
	cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}

	inFile.close();  //finished with the file

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
