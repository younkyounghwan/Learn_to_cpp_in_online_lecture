#include <iostream>
#include <typeinfo>

using namespace std;

// �޸� �ּҸ� ��� ���� = ������

int* doSomething(int* ptr_a)
{
	return 0;
}


int main()
{
	int x = 5; // ��� �������� �ּҸ� ������ �ִ�.
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

	cout << *&x << endl; // .. ���?

	
	
	
	
	return 0;
}