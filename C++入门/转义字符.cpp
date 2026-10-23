//
// Created by Sun198 on 2026/10/18.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //转义字符；将普通的字符使用\符号作为开头，将其含义进行转换，对照ASCII码表的字符控制的功能
    // \n 换行    \t制图表   \\表示一个反斜杠本身     \'表示单引号   \"表示双引号
    cout<<"v我50 \n我吃个疯狂星期四"<<endl;
    cout<<"--------------"<<endl;

    // \t制表符演示，效果等同于键盘的tab键，一个\t可以补充到8个字符位
    cout<<"I'm\tthe best"<<endl;
    cout<<"Mark\tSelby"<<endl;
    cout<<"--------------"<<endl;

    // 当你需要打印\本身，需要\\
    cout<<"\\"<<endl;

    //如果要打印单引号和双引号，需要\'和\"来转义，是反向转义，将他俩的特殊含义消除
    cout<<"\' \""<<endl;
    return 0;
}
