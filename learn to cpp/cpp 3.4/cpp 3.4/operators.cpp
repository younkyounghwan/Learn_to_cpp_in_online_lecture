#include <iostream>

using namespace std;

int main()

{

    float f;



    sizeof(float);

    sizeof(f); //sizeof is not a function. operator

    cout << sizeof f;



    int x = 3;

    int y = 10;

    int z = (++x, ++y); //coma operator is very useful.



    cout << x << " " << y << " " << z << endl;



    int a = 1, b = 10;



    int c = 0;



    z = a, b;



    cout << c << endl;



    // condtional operator 3항 연산자? (arithmetric if)

    bool onSale = true;



    //const int price = (onSale == true) ? 10: 100;



    /*if (inSale)

        price = 10;

    else

        price = 100;

    cout << price <<endl;



    */



    x = 5;



    cout << ((x % 2 == 0) ? "even" : "odd") << endl;





    return 0;

}