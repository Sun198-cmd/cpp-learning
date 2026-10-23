//
// Created by Sun198 on 2026/10/18.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    system("chcp 65001");   //cin输入中文乱码解决方法
    // cin >> 变量;
    int num ;
    cout<<"请输入一个整数"<<endl;
    cin>>num;
    cout<<num<<endl;

    double num2;
    cout<<"请输入一个实型数字"<<endl;
    cin>>num2;
    cout<<num2<<endl;

    char c;
    cout<<"请输入一个字符"<<endl;
    cin>>c;
    cout<<c<<endl;

    string s;
    cout<<"请输入一个字符串"<<endl;
    cin>>s;
    cout<<s<<endl;


    
    return 0;
}
