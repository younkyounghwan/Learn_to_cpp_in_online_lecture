#include <iostream>

#include "MY_CONSTANTS.h"

using namespace std; //�Լ� parameter �Ű����� 

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

    //mecro�� ������� �ʴ� ����: ������� �����. ��ũ�ΰ� ���Ǵ� 

    //������ �ʹ� �о����⿡ ���� �ʴ´�.



    double radius;

    cin >> radius;

    double circumference = 2.0 * radius * constants::pi;

    cout << circumference << endl;

    return 0;

}