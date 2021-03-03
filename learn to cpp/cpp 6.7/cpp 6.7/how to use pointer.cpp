#include <iostream>
#include <typeinfo>

using namespace std;

// 메모리 주소를 담는 변수 = 포인터
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

// de-reference의 뜻: 포인터가 "저쪽 주소에 가면 이 데이터가 있어요" 
// 라고 간접적으로 가리키기만하는 것에 대해서, "그럼 거기에 진짜 뭐가 있는지  
// 내가 들여다볼게"라며 직접적으로 접근하겠다는 의미
int main()
{
	int x = 5; // 모든 변수들은 주소를 가지고 있다.
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

	// 포인터는 모든 타입에 대해서 그 크기가 모두 같다.
	cout << endl;

	typedef int* pint; //잘 안쓴다. 이중, 삼중 포인터를 쓸떄나 가끔 쓴다.
	pint ptr_k = &x, ptr_s = &x;
	//int *ptr_k = &x, *ptr_s = &x;  

	
	cout << x << endl;
	cout << &x << endl; // & = address-of operator
	cout << (int)&x << endl;
	
	cout << *&x << endl; // .. 상쇄?
	
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