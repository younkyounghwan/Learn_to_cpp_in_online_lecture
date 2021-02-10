#include <iostream>

#include <bitset>

#include <typeinfo>

using namespace std;

int main()

{

    // << left shift

      // >> 

    // ~, &, |, ^

    unsigned int a = 3; // <<



    cout << std::bitset < 8 >(a) << endl;



    cout << std::bitset < 8 >(a << 1) << " " << (a << 1) << endl;

    cout << std::bitset < 8 >(a << 2) << " " << (a << 2) << endl;

    cout << std::bitset < 8 >(a << 3) << " " << (a << 3) << endl;

    cout << std::bitset < 8 >(a << 4) << " " << (a << 4) << endl;



    unsigned int b = 1024; // >>



    cout << std::bitset < 16 >(b) << endl;



    cout << std::bitset < 16 >(b >> 1) << " " << (b >> 1) << endl;

    cout << std::bitset < 16 >(b >> 2) << " " << (b >> 2) << endl;

    cout << std::bitset < 16 >(b >> 3) << " " << (b >> 3) << endl;

    cout << std::bitset < 16 >(b >> 4) << " " << (b >> 4) << endl;

    // ~

    cout << std::bitset < 16 >(~b) << " " << (~b) << endl;



    unsigned int c = 0b1100;

    unsigned int d = 0b0110;



    cout << c << " " << d << endl;



    // &, |, ^

    cout << std::bitset<4>(c & d) << endl;

    cout << std::bitset<4>(c | d) << endl;

    cout << std::bitset<4>(c ^ d) << endl; //can write c &= b



    // Quiz



    unsigned int bi = 0b0110;

    unsigned int num1 = 5;

    unsigned int num2 = 12;



    cout << std::bitset<8>(bi >> 2) << endl;

    cout << typeid(std::bitset<8>(bi >> 2)).name() << endl;

    cout << std::bitset<8>(num1 | num2) << endl;

    cout << std::bitset<8>(num1 & num2) << endl;

    cout << std::bitset<8>(num1 ^ num2) << endl;

    return 0;

}