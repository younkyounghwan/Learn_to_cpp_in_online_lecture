#include <iostream>
namespace work1
{
	namespace work11
	{
		namespace work111
		{
		
			int a = 1;
			void doSomething()
			{
				a += 3;
			}
		}
	}
}
namespace work2::work22::work222
{
	int a = 8;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;

	cout << apple << endl;

	{
		int apple = 1;

		cout << apple << endl;
	} // 객체지향의 성격

	cout << apple << endl;

	apple = 1;

	//cout << work1::a << endl;
	//cout << work2::a << endl;

	return 0;
}