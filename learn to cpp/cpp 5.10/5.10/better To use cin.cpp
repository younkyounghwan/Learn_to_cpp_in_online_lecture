#include <iostream>
// case-switch?
using namespace std;

int getInt()
{
	while (1)
	{

	
	cout << "Enter an integer number : ";
	int x;
	cin >> x;
	if (cin.fail()) {

		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Invalid operator, please try again" << endl;
	}
	else {
		cin.ignore(32767, '\n');
		return x;
	}
	}
}

char getOperator()
{
	while(1)
	{ 
	cout << "Enter an operator (+,-) : "; //TODO: more operator *, / etc.
	char op;
	cin >> op;
	cin.ignore(32767, '\n');
	if (op == '+' || op == '-')
		return op;
	else cout << "Invalid operator, please try again" << endl;

	
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;

	else if (op == '-') cout << x - y << endl;

	else cout << "Invalid operator" << endl;
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);



	return 0;
}