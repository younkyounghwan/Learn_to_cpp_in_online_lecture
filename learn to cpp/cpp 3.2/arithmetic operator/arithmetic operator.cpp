#include <iostream>

using namespace std;

int main()

{

    //arithmetic

    int x = 7;

    int y = 4;



    cout << x / y << endl;

    cout << float(x) / y << endl;



    cout << -5 / 2 << endl; //뒤를 버림.

    cout << -5 % 2 << endl; //왼쪽의 부호에 따라 나머지의 부호가 바뀜. 



    int z = 0;

    z += x;



    return 0;

}