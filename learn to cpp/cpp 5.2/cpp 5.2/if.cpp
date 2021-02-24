#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int y = 0;

	if (x > 10)
		cout << x << " is greater than 10" << endl;
	else if (x < 10)
		cout << x << " is less than 10" << endl;
	else //if (x == 10) 
		cout << x << " is 10" << endl;
	if (1)
		int x = 5;
	else
		int x = 6;

	cout << x << endl;

	// return (x > y) ? x : y;

	if (x > 10); //null statement


	/*
	if (x = 0) // x = 0; if (x)
	cout << x << endl;
	*/

	return 0;
}