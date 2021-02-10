#include <iostream>

#include <bitset>

using namespace std;

int main()

{

    const unsigned char opt0 = 1 << 0;

    const unsigned char opt1 = 1 << 1;

    const unsigned char opt2 = 1 << 2;

    const unsigned char opt3 = 1 << 3;



    cout << bitset<8>(opt0) << endl;

    cout << bitset<8>(opt1) << endl;

    cout << bitset<8>(opt2) << endl;

    cout << bitset<8>(opt3) << endl;



    unsigned char items_flag = 0;



    cout << "No item " << bitset<8>(items_flag) << endl;

    // item0 on 

    items_flag |= opt0;

    cout << "item0 obtained " << bitset<8>(items_flag) << endl;



    //item3 on

    items_flag |= opt3;

    cout << "item3 obtained " << bitset<8>(items_flag) << endl;



    // item3 lost

    items_flag &= ~opt3;

    cout << "item3 lost " << bitset<8>(items_flag) << endl;



    //has item1 ? 

    if (items_flag & opt1) //  true가 뜨는 매커니즘?

        cout << "Has item1 " << bitset<8>(items_flag) << endl;

    else

        cout << "Not have item1 " << bitset<8>(items_flag) << endl;



    // obtain item 2,3

    items_flag |= (opt2 | opt3);



    cout << "Item 2,3 obtained " << bitset<8>(items_flag) << endl;



    if ((items_flag & opt2) && !(items_flag & opt1))

    {   // item2 obtained item1 lost

        //items_flag ^= opt2;

        //items_flag ^= opt1;

        items_flag ^= (opt1 | opt2);

    }

    cout << bitset<8>(items_flag) << endl;



    //graphics example

    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)



    const unsigned int red_mask = 0xFF0000;

    const unsigned int green_mask = 0x00FF00;

    const unsigned int blue_mask = 0x0000FF;



    cout << std::bitset<32>(red_mask) << endl;

    cout << std::bitset<32>(green_mask) << endl;

    cout << std::bitset<32>(blue_mask) << endl;



    unsigned int pixel = 0xDAA520;



    cout << std::bitset<32>(pixel) << endl;



    unsigned char red = (pixel & red_mask) >> 16;

    unsigned char green = (pixel & green_mask) >> 8;

    unsigned char blue = pixel & blue_mask;



    cout << "red " << bitset<8>(red) << " " << int(red) << endl;

    cout << "green " << bitset<8>(green) << " " << int(green) << endl;

    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

    
    
    
    //Quiz

    unsigned char my_article_flag = 0;

    cout << std::bitset<8>(my_article_flag) << endl;



    unsigned char opt_viewed = 1 << 0;

    unsigned char opt_edited = 1 << 1;

    unsigned char opt_liked = 1 << 2;

    unsigned char opt_shared = 1 << 3;

    unsigned char opt_deleted = 1 << 6;



    // view article 



    my_article_flag ^= opt_viewed;

    cout << std::bitset<8>(my_article_flag) << endl;



    // click liked from article



    my_article_flag ^= opt_liked;

    cout << std::bitset<8>(my_article_flag) << endl;



    // click again liked from article



    my_article_flag &= ~opt_liked;

    cout << std::bitset<8>(my_article_flag) << endl;



    return 0;

    
  

}