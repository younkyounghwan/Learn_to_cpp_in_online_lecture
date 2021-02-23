#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height; //data
	float weight;
	int	age;
	string name;

	void print()
	{ //fuction
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};

struct Family
{
	Person me, mom, dad;

};

Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Jack Jack" };

	return me;
}

int main()
{
	Person me{2.0, 100.0, 20, "jack jack"};

	me.print();
	Person me2 = me;
	//Person me2(me);
	me2.print();
	//printPerson(me);
	/*
	me.age = 20;
	me.name = "jack";
	me.height = 2.0;
	*/
	Person mom;
	Person dad;

	Person me_from_func = getMe();
	me_from_func.print();


	return 0;
}