#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	/*
	if (color == Colors::BLACK)
		cout << "black" << endl;
	else if (color == Colors::WHITE)
		cout << "white" << endl;
	else if (color == Colors::RED)
		cout << "red" << endl;
	*/
	switch (color) // switch (static_cast<int>(color))
	{
		// using Colors
		case Colors::BLACK: //case 0:
			cout << "black" << endl;
			break;

		case Colors::WHITE: //case 1:
			cout << "white" << endl;
			break;

		case Colors::RED: //case 2:
			cout << "red" << endl;
			break;

		case Colors::GREEN: //case 3:
			cout << "green" << endl;
			break;

		case Colors::BLUE: //case 4:
			cout << "blue" << endl;
			break;

	}
}

int main()
{
	printColorName(Colors::BLACK);
	int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << "Zero:";
		break;

	case 1:
		cout << "One";
		break;

	case 2:
		cout << "Two";
		break;
	}
	cout << endl;







	int y;

	cin >> y;
	switch (y)
	{
		int a;
		// int b = 5;

		case 0:		
			a = 1;
			cout << a << endl;
			int c;
			// c = 5 garbage value
			break;

		case 1:
			c = 5;
			cout << c << endl;
		
			break;

		default:
			cout << "Undefined input " << endl;
			//break;
	}

	return 0;
}