#include <iostream>
#include <vector>
#include <cstdint>
// 유지보수에 탁월하다
using namespace std;

int main()
{
	typedef double distance_t; // double to float

	double     my_distance;
	distance_t home2work;
	distance_t home2school;

	/// typedef vector <pair <string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >; // Not assignment
	vector <pair <string, int> > pairlist1; //complex datatype
	vector <pair <string, int> > pairlist2;

	return 0;
}