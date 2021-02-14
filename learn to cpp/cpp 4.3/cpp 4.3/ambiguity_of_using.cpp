#include <iostream>

namespace a
{
	int my_var(10);
}
namespace b
{
	int my_var(20);
}
using namespace std;
//using std::cout;
//using std::endl;

using namespace a;
using namespace b;
int main()
{
	
	cout << "Hello" << endl;
	//cout << my_var << endl; //ambiguity
	return 0;

}