#include <iostream>
#include <typeinfo>
#include <string>
/*
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}
	if (weapon_id == 1) // hammer
	{
		return 2;
	}
}
*/

enum Color //user-defined data types
{ 
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,
	COLOR_PINK
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED
};



int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color = COLOR_RED;

	cout << my_color << " " << COLOR_BLACK << endl;

	if (COLOR_BLUE == COLOR_GREEN)
		cout << "Equal" << endl;

	cout << COLOR_PINK << endl;

	int color_id = COLOR_RED;

	cout << color_id << endl;

	//Color my_color2 = 3

	Color my_color2 = static_cast<Color>(3);

	//cin << my_color2;

	int in_number;
	cin >> in_number;

	//if (in_number == 0) my_color2 = COLOR_BLACK;

	if (in_number == static_cast<Color>(0))
		my_color2 = static_cast<Color>(0);

	cout << my_color2 << endl;

	string str_input;

	std::getline(cin, str_input);

	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);

}