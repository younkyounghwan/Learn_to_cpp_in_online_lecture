#include <iostream>

using namespace std;

void doSomething(int students_scores[]) // Not array, this is pointer
{ // 배열을 가져오는 것이 아닌 배열의 주소를 변수로 가져온다.

	cout << "check" << endl;
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size in doSomething " << sizeof(students_scores) << endl; // pointer
}

int main()
{
	const int num_students = 20;
	// cin >> num_students;

	int students_scores[num_students] = { 1,2,3,4,5 };
	cout << (int)&students_scores << endl;
	
	
	cout << endl;



	cout << "check" << endl;
	cout << (int)&students_scores << endl;
	cout << (int)students_scores << endl; // same 
	cout << "size in main " << sizeof(students_scores) << endl;

	cout << endl;

	for (int num = 0; num < 20; num++) {

	
		cout << (int)&students_scores[num] << endl;
	
	}

	cout << endl;

	doSomething(students_scores);

	cout << endl;

	cout << sizeof(students_scores) << endl;

	return 0;
}