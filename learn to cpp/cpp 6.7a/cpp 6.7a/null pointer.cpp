#include <iostream>
#include <cstddef>
using namespace std;

void doSomething(double *ptr) // ���ڰ��� ����ȴ�!!!!~!~!~!~!
{
	cout << "address of pointer variable in doSomething() " << &ptr << endl;

	if (ptr != nullptr)
	{
		cout << *ptr << endl;
	}

	else
	{
		cout << "NUll ptr, do nothing" << endl;
	}
}


int main()
{
	double *ptr{ nullptr }; // moden c++

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	nullptr_t nptr; //null �����͸� �޴� parameter�� �� �� ���

	cout << "address of pointer variable in main() " << &ptr << endl;

	return 0;
}