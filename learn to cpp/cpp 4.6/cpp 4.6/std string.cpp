#include <iostream>
#include <string>
#include <limits>


using namespace std;


int main()
{
	const char my_strs[] = "Hello world!";
	const string my_hello = "Hello world!";
	// Datatype for user

	string my_ID = "jackson";

	cout << "Your age? : ";
	int age;
	cin >> age;
	//std::getline(std::cin, age);

	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);



	cout << name << " " << age << endl;


	string a("Hello, ");
	string b("World");
	string hw = a + b; //append
	hw += "I'm good ";


	cout << hw << a.length() << endl;

	return 0;
}