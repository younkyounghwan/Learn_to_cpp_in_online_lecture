#include <iostream>
#include <typeinfo>

using namespace std;

// �޸� �ּҸ� ��� ���� = ������
// pointer is one of the reference  
int* doSomething(int* ptr_a)
{
	return nullptr;
}

struct Something
{
	int a, b, c, d;
};

// de-reference operator (*)

// de-reference�� ��: �����Ͱ� "���� �ּҿ� ���� �� �����Ͱ� �־��" 
// ��� ���������� ����Ű�⸸�ϴ� �Ϳ� ���ؼ�, "�׷� �ű⿡ ��¥ ���� �ִ���  
// ���� �鿩�ٺ���"��� ���������� �����ϰڴٴ� �ǹ�
int main()
{
	int x = 5; // ��� �������� �ּҸ� ������ �ִ�.
	double d = 1.01;
	int* ptr_x = &x;
	double *ptr_d = &d;
	
	cout <<"ptr_x: "<< ptr_x << endl;
	cout <<"*ptr_x: "<< *ptr_x << endl;
	cout <<"typeid(ptr_x).name(): " << typeid(ptr_x).name() << endl;
	cout << sizeof(x) << endl;
	cout << sizeof(&x) << endl;
	cout << sizeof(ptr_x) << endl;

	cout << endl;

	cout <<"ptr_d: "<< ptr_d << endl;
	cout <<"*ptr_d: "<< *ptr_d << endl;
	cout << "typeid(ptr_d).name(): " << typeid(ptr_d).name() << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&d) << endl;
	cout << sizeof(ptr_d) << endl;

	// �����ʹ� ��� Ÿ�Կ� ���ؼ� �� ũ�Ⱑ ��� ����.
	cout << endl;

	typedef int* pint; //�� �Ⱦ���. ����, ���� �����͸� ������ ���� ����.
	pint ptr_k = &x, ptr_s = &x;
	//int *ptr_k = &x, *ptr_s = &x;  

	
	cout << x << endl;
	cout << &x << endl; // & = address-of operator
	cout << (int)&x << endl;
	
	cout << *&x << endl; // .. ���?
	
	cout << endl;

	Something ss;
	Something *ptr_ss;
	
	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_ss) << endl;

	cout << endl << "Memory  issue " << endl;

	int a = 5;
	double b = 123.0;

	int* ptr_a;
	double ptr_b;

	//cout << *ptr_a << endl;
	
	return 0;
}