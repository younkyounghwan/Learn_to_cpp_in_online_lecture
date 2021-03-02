#include <iostream>
#include <typeinfo>

using namespace std;

// 메모리 주소를 담는 변수 = 포인터

int* doSomething(int* ptr_a)
{
	return 0;
}


int main()
{
	int x = 5; // 모든 변수들은 주소를 가지고 있다.
	double d = 1.0;
	int *ptr_x = &x;
	double *ptr_d = &d;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << typeid(ptr_x).name() << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	typedef int* pint;
	//pint ptr_x;
	
	cout << x << endl;
	cout << &x << endl; // & = address of operator
	cout << (int)&x << endl;
	
	// de-reference operator (*)

	cout << *&x << endl; // .. 상쇄?

	
	
	
	
	return 0;
}