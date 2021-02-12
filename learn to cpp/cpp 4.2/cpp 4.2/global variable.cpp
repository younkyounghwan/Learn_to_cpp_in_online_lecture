#include <iostream>
#include "Header.h"
using namespace std;

int value = 123; //global variable vs static



// foward declaraition
extern void dosomething(); //can remove extern



void doSomething()
{
	static int a = 1;
	++a;
	cout << a << endl;
}
int main()
{
	doSomething();
	doSomething();
	doSomething();
	doSomething();

	cout << Constants::pi << " " << &Constants::pi << endl;
	

	cout << value << endl;
	
	int value = 1; //local variable
	
	cout << ::value << endl; //global

	cout << value << endl;

	return 0;
}


/*
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_x; // x

	extern int g_z;
	extern const int g_z;

	int g_z(1);
	static int g_y(1);
	const int g_y(1);

	extern int g_w(1);
	extern const int g_w(1);
*/