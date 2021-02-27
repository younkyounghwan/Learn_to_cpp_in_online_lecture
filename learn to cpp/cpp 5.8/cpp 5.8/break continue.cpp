#include <iostream>

using namespace std;

void BreakOrReturn()
{
	while (1)
	{


		char ch;
		cin >> ch;

		if (ch == 'b')	break;
	
		if (ch == 'r')  return;

		cout << "Hello " << endl;
	}
}


int main()
{
	for (int i = 0; i < 10; i++) { // print odd number
		if (i % 2 == 0) continue;

		cout << i << endl;
	}

	cout << endl;

	int count = 0;
	do {
		if (count == 5) continue;

		cout << count << endl;
		//count++;
	} while (++count < 10);
		//while(count < 10;

	cout << endl;

	count = 0;
	bool escape_flag = false;

	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << ++count << endl;

		if (ch == 'x') escape_flag = true;
		//break;
	}
	BreakOrReturn();
	
	return 0;

}