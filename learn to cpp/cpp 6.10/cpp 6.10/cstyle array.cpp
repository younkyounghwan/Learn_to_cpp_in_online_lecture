#include <iostream>
using namespace std;


const char *getName()
{
	return "Jack Jack";
}

int main()
{
	//char name [] = "Jack jack"; 
	const char* name = getName(); // const�� �������ν� ���ڿ��� 
	const char* name2 = getName(); // ������ �Ҵ����� �ʰ� �ּҸ� ����� �� �ִ�.

	cout << uintptr_t(name) << endl; 
	cout << uintptr_t(name2) << endl;

	cout << endl;


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name1 = "jack jack";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name1 << endl;

	// cout���� ���ڿ��� Ư���� ����Ѵ�.

	cout << endl;

	char c = 'q';
	cout << &c << endl; // �ű���....

}