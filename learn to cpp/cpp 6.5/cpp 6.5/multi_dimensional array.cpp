#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_cols = 5;

	for (int row = 0; row < num_rows; row++) {
		for (int col = 0; col < num_cols; col++) {
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;

	int array[num_rows][num_cols] //=  //row-major vs colum-major
	{ //initialization
		{1,2,3,4,5},	 // row 0
		{6,7,8,9,10},  	 // row 1
		{11,12,13,14,15} // row 2
	};

	for (int row = 0; row < num_rows; row++) {
		for (int col = 0; col < num_cols; col++) {
			// cout << '[' << row << ']' << '[' << col << ']' << '\t';
			//cout << array[row][col] << '\t';
			cout << (int)&array[row][col] << '\t'; //�迭�� 2�������� �Ҵ������, �ּҰ��� 1�������� �Ҵ��.
			
		}
		cout << endl;
	}

	return 0;
}