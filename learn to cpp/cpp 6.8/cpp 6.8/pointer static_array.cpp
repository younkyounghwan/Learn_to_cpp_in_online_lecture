#include <iostream>

using namespace std;

int main()
{
	int array[5] = { 9,7,5,3,1 };


	cout << array[0] << " " << array[1] << endl;
	cout << array << endl; //not array, it's pointer 
	cout << &(array[0]) << endl;

	cout << *array << endl;

	char name[] = "jackajck";
	cout << *name << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << sizeof(array) << endl;

	int *ptr1 = array;

	cout << sizeof(ptr1) << endl;

	return 0;

}