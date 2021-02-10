#include <iostream>

int add(int a, int b)

{

    return a + b;

}

using namespace std;

int main()

{

    int x = 6, y = 6;

    cout << x << " " << y << endl;

    cout << ++x << " " << --y << endl;

    cout << x << " " << y << endl;

    cout << x++ << " " << y-- << endl;

    cout << x << " " << y << endl;



    int a = 1;

    int v = add(x, ++x); //do not use



    cout << v << endl;



    int k = 1, l = 2;

    cout << add(k, l++) << endl;



    int q = 1;

    q = ++q;

    cout << q << endl;





    return 0;

}