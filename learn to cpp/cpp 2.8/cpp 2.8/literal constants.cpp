#include <iostream>

using namespace std;

int main()

{

    float pi = 3.14f; // 리터럴

     // 심볼릭? const 

    int i = 1234u; //unsigned()



    //decimal 012345678910

    //octal 0123456710111213

    //Hexa 0123456789ABCDEF10





    int x = 0xF; //Hexa

    cout << x << endl;





    int y = 0b1010;

    cout << y << endl;





    const int price_per_item = 10;

    int num_items = 123; // magic number

    int price = num_items * price_per_item;

    cout << price << endl;

    return 0;

}