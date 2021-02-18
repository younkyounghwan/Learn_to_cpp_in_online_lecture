#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

int main()
{

	/*
	numeric conversion 
	*/

	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;


	double d1 = 0.123456789;
	float f = d1;

	cout << setprecision(12) << d1 << endl;


	int i2 = 1234;
	float f2 = i2;

	cout << setprecision(12) << f2 << endl;


	int f3 = 3.14;	
	int i3 = f3;

	cout << setprecision(12) << i3 << endl;

	cout << 5u - 10 << endl;;
	// int, unsigned int, long, unsigned long
	//long long, unsigned long long, float, double
	//long double

	//int i = int(4.0); cpp style
	//int i = (int)4.0; c style
	//int i = static_cast<int>(4.0); recommended style


	/* 
	numeric promotion
	*/
	
	float a = 1.0f;
	double d = a;

	//int a = 123;
	cout << typeid(a).name() << endl;
}