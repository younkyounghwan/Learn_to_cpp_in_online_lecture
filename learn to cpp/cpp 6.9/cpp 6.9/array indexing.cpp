#include <iostream>

using namespace std;

int main()
{
	double value = 7.0;
	double* ptr = &value; //de-reference 할때를 위해 데이터 타입을 표기

	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr+2) << endl;
	cout << uintptr_t(ptr+3) << endl;

	cout << endl;

	int array[] = { 9,7,5,3,1 };
	int* ptr1 = array;

	for (int i = 0; i < 5; i++) {

		//cout << array[i] << " " << uintptr_t(&array[i]) << endl;
		cout << *(ptr1 + i) << " " << uintptr_t(ptr1 + i) << endl;
	}

	cout << endl;

	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char);

	char* ptr2 = name;

	for (int i = 0; i < n_name; i++) {
		cout << *(name + i);
	}
	cout << endl;
	
	while (1) {
		if (*ptr2 == NULL)
			break;
		cout << *ptr2;
		ptr2++;
	}
	cout << endl;



	return 0;
}