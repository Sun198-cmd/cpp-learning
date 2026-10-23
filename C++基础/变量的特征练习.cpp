//
// Created by Sun198 on 2026/10/13.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int remain;
    remain=50;

    cout<<"小明的余额；"<<remain<<endl;

    remain=remain-5;
    cout<<"购买冰淇淋花费5元，余额剩余："<<remain<<endl;

    remain=remain+10;
    cout<<"转卖冰淇淋得到10元,余额剩余："<<remain<<endl;

    remain=remain-2;
    cout<<"购买彩票花费2元，余额剩余："<<remain<<endl;

    remain=remain*2;
    cout<<"彩票中奖余额翻倍，余额剩余："<<remain<<endl;

    return 0;
}