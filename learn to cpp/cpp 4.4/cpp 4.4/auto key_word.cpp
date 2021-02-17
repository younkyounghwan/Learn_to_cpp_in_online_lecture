#include <iostream>


// template

auto add(int x, int y)
{
	return x + y;
}
auto add(double x, double y)
{
	return x + y;
}
//auto add(int x, int y) -> int
//{
//	return x + y;
//}
//auto add(double x, double y) -> double
//{
//	return x + y;
//}
int main()
{
	using namespace std;

	auto a = 123; //int
	auto d = 123.0; //double
	auto c = 1 + 2.0; //double
	auto result = add(1, 2);

	return 0;
}