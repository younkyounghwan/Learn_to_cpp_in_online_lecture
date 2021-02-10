#include <iostream>

#include "MY_CONSTANTS.h"

using namespace std; //함수 parameter 매개변수 

void printNumber(const int& my_number)

{

    cout << my_number << endl;

}

int main()

{
    
    printNumber(123);



    const double gravity{ 9.8 }; // You can also write "double const" 

    constexpr int my_const(123); //compile



    int number;

    cin >> number;

    const int special_number(number); //runtime

    //constexpr is error

    cout << special_number << endl;



    const int price_per_item = 30;



    int num_item = 123;



    int price = num_item * price_per_item;

    //mecro를 사용하지 않는 이유: 디버깅이 힘들다. 메크로가 사용되는 

    //번위가 너무 넓어지기에 쓰지 않는다.



    double radius;

    cin >> radius;

    double circumference = 2.0 * radius * constants::pi;

    cout << circumference << endl;

    return 0;

}