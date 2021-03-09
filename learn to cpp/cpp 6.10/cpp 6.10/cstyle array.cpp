#include <iostream>
using namespace std;


const char *getName()
{
	return "Jack Jack";
}

int main()
{
	//char name [] = "Jack jack"; 
	const char* name = getName(); // const를 붙임으로써 문자열에 
	const char* name2 = getName(); // 변수를 할당하지 않고도 주소를 출력할 수 있다.

	cout << uintptr_t(name) << endl; 
	cout << uintptr_t(name2) << endl;

	cout << endl;


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name1 = "jack jack";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name1 << endl;

	// cout에서 문자열은 특별히 취급한다.

	cout << endl;

	char c = 'q';
	cout << &c << endl; // 신기해....

}