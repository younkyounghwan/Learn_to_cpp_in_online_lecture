#include <iostream>

using namespace std;
int pow(int base, int exponent)
{
	int result = 1;
	
	for (int count = 1; count <= exponent; ++count)
		result *= base;
	return result;
}
int main()
{
	/*
	for (<member initailization> ; <boolen type> default == True; <operator>)
	*/
	for (int i = 0; i < 10; ++i)  { // iteration �ݺ�
	
		cout << i << endl;
	}
	
	for (int i = 0, j = 0; i + j < 10; j += 2)	{
		cout << i << " " << j << endl;
	}

	cout << pow(2, 4) << endl;

	for (int i = 2; i < 10; i++) { //���ڸ�
		cout << i << "��" << endl;
		for (int j = 1; j < 10; j++) { //���ڸ�
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	return 0;
}