//
// Created by Sun198 on 2026/10/18.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    string name;
    double height;
    int age;

    cout<<"请输入您的姓名；"<<endl;
    cin>>name;

    cout<<"请输入您的身高；"<<endl;
    cin>>height;

    cout<<"请输入你的年龄："<<endl;
    cin>>age;

    cout<<"-----------"<<endl;
    cout<<"信息输入完成，您的信息如下:"<<endl;
    cout<<"姓名；"<<name<<endl;
    cout<<"身高；"<<height<<endl;
    cout<<"年龄；"<<age<<endl;

    return 0;
}
