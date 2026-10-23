//
// Created by Sun198 on 2026/10/13.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //有符号：signed（可选），无符号：unsigned（必写）
    signed int num1=10;
    int num2=20;
    cout<<num1<<" "<<num2<<endl;

    unsigned int num3=-30;          //无符号的数字，必须大于等于0，不然数据会乱套
    cout<<num3<<" "<<num3<<endl;

    //long 无符号
    unsigned long num4=4000000000;
    cout<<num4<<" "<<num4<<endl;

    //无符号的快捷表示
    u_short num5=5;     //u_接数据类型
    cout<<num5<<" "<<num5<<endl;

    return 0;
}