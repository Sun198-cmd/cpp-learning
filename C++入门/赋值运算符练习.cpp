//
// Created by Sun198 on 2026/10/19.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    int money=50;
    cout<<"小明余额："<<money<<endl;

    money-=5;
    cout<<"购买冰淇淋花费5元，剩余金额："<<money<<endl;

    money+=10;
    cout<<"转卖冰淇淋得到10元，剩余金额："<<money<<endl;

    money-=2;
    cout<<"购买彩票花费两元，剩余金额："<<money<<endl;

    money*=2;
    cout<<"彩票中奖余额翻倍，剩余金额："<<money<<endl;





    return 0;
}