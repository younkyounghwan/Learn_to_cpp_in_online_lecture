#include <iostream>
using namespace std;

void printArray(int array[], const int length)
{
	for (int index = 0; index < length; ++index) {
		cout << array[index] << " ";
	}
	cout << endl;
}

/*
void print_sorted_array(int array[], const int length)
{
	
	for (int i = 0; i < length - 1; i++) {
		int value = 100;
		int index = 0;
		for (int j = i; j < length; j++) {
			if (array[j] < value) {
				value = array[j];
				index = j;
			}
			
		}
		
		array[i] = array[index];
		array[index] = value;
		cout << array << endl;
	}
	cout << array << endl;;
}
*/

int main()
{
	/*			value	index
	3 5 2 1 4	  1       3	
	1 5 2 3 4	  2		  2
	1 2 5 3 4	  3		  3
	1 2 3 5 4	  4		  4
	1 2 3 4 5	
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };
	
	printArray(array,length);
	//print_sorted_array(array, length);
	
	for (int start_index = 0; start_index < length - 1; start_index++) {
		int smallest_index = start_index;

		for (int current_index = start_index + 1; current_index < length; current_index++) {
		
			if (array[smallest_index] > array[current_index]) {
				smallest_index = current_index;
			}

		}
		// swap two values in the array
		// std::swap(array[smallest_index), array[start_index]);
		int temp = array[smallest_index];
		array[smallest_index] = array[start_index];
		array[start_index] = temp;


		printArray(array, length);
	}
	
	//Bubble sort
	
	return 0;
}