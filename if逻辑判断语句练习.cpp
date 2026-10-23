//
// Created by Sun198 on 2026/10/19.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    cout<<"欢迎来到游乐园，儿童免费，成人收费"<<endl;
    int age;
    cout<<"请输入你的年龄；"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"您未成年，免费游玩。欢迎你小朋友 \n 祝您游玩愉快!!!"<<endl;

    }

    return 0;

}