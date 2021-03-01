#include <iostream>

using namespace std;

enum StudentName
{
	JACKJACK,		// = 0
	DASH,			// = 1
	VIOLET,			// = 2
	NUM_STUDENTS	// = 3
};

struct Rectangle
{
	int length;
	int width;
};

int main()
{
	// int num_students = 0;
	// cin >> num_students;
	// int students[num_students];

	// using enumerate in array

	int students_scores[NUM_STUDENTS];

	students_scores[JACKJACK] = 0;
	students_scores[DASH] = 100;


	cout << endl;
	// Initailizing array

	
	
	int my_array[] = { 1, 2, 3, 4, 5 };

	for (int cnt = 0; cnt < 5; cnt++)
	{
		cout << my_array[cnt] << endl;
	}
	
	cout << endl;
	// Identifying sizeof struct 

	

	cout << sizeof(Rectangle) << endl;
	Rectangle rect_arr[10];
	cout << sizeof(rect_arr) << endl;
	rect_arr[0].length = 1;
	rect_arr[0].width = 10;


	cout << endl;
	// assigning in array
	
	

	/*
	int jackjack_score;
	int dash_score;
	int violet_score;
	*/

	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int

	one_student_score = 100;

	student_scores[0] = 100; // 1st element // can use like variables
	student_scores[1] = 80;  // 2nd element
	student_scores[2] = 90;  // 3rd element
	student_scores[3] = 50;  // 4th element
	student_scores[4] = 0;   // 5th element
	//student_scores[5] = 30;  // 6th element 

	for (int cnt = 0; cnt < 5; cnt++) {
		cout << student_scores[cnt] << endl;
	}
	
	cout << endl;
	
	// Iedentifing sizeof array

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;
	
	return 0;
}