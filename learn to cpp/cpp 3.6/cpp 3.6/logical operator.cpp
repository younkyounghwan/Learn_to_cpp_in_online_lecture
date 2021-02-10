#include <iostream>

int main()

{

    using namespace std;



    // logical NOT

    bool x = true;



    cout << !x << endl;



    int a = 5;

    int b = 7;



    if (!(a == b))

    {

        cout << "a does not equal b" << endl;

    }



    else

        cout << "a equals b" << endl;



    // logical AND

    bool x1 = true;

    bool y1 = false;



    cout << (x1 && y1) << endl;



    bool hit = true;

    int health = 10;



    if (hit == true && health < 20)

    {

        cout << "Die" << endl;

    }



    // logical OR

    bool x2 = true;

    bool y2 = false;



    cout << (x2 || y2) << endl;



    int v = 1;

    if (v == 0 || v == 1)

        cout << "v is 0 or 1" << endl;



    // short circuit evaluation



    int k = 2;

    int l = 2;



    if (k == 1 && l++ == 2) // y++가 작동되지 않음. 

    {

        //do something

    }



    cout << l << endl;



    // De Morgan's Law



    //!(x && y);

    //!x || !y;



    // XOR



    // f f f 

    // f t t

    // t f t

    // t t f



    /*
    if (x != y)

        cout << "XOR" << endl;

    else

        cout << "Not XOR" << endl;

    */


    bool bo1 = true;

    bool bo2 = false;

    bool bo3 = false;



    bool r1 = bo1 || bo2 && bo3;

    bool r2 = (bo1 || bo2) && bo3;

    bool r3 = bo1 || (bo2 && bo3);

}