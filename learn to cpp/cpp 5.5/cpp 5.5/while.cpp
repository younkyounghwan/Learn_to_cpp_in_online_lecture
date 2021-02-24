#include <iostream>

using namespace std;

int main()
{
	

	
	while (1)
	{
		static int cnt = 0;
		cout << cnt << endl;
		cnt++;

		if (cnt == 10)
			break;
	}

	// ...........

	int Count = 1;

	while (Count < 100)
	{
		if (Count % 5 == 0) cout << "Hello " << Count << endl;

		Count++;
	}

	cout << endl;
	// .............

	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}



	cout << "While-loop test" << endl;

	// .............

	//unsigned int count = 10;

	//while (count >= 0)
	//{
	//	if (count == 0) cout << "Zero";
	//	else cout << count << " ";
	//
	//	count--;

	//}


	return 0;
}