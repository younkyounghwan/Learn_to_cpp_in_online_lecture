#include <iostream>
// ���ݱ��� �ߴ� ���� �߿� ���� ����� ����
using namespace std;
//void printArraysize(int *array)
void printArraysize(int array[])
{
	cout << sizeof(array) << endl; // 4
	cout << *array << endl;

	*array = 100;
}

struct Mystruct
{
	int array[5] = { 9,7,5,3,1 };
};

void doSomething(Mystruct ms)
{
	cout << sizeof(ms.array) << endl; // array�� paramter�θ� ���� �ʴ´ٸ� array�� �ּҰ��� �ƴϴ�.
}

int main()
{
	int array[5] = { 9,7,5,3,1 };


	cout << array[0] << " " << array[1] << endl;
	cout << array << endl; //not array, it's pointer 
	cout << &(array[0]) << endl;

	cout << *array << endl;

	char name[] = "jackjack";
	cout << *name << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << sizeof(array) << endl;

	int *ptr1 = array; // this  variable type is not int, it's pointer

	cout << sizeof(ptr1) << endl;

	printArraysize(array);

	cout << array[0] << " " << array << " " << *array << endl;

	Mystruct ms;
	cout << ms.array[0] << endl;

	doSomething(ms);

	return 0;

}