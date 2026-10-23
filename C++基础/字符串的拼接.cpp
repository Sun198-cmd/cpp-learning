//
// Created by Sun198 on 2026/10/18.
//
#include <iomanip>
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    string name="小黑";
    string major="物理";
    int age=21;
    double height=172.50;
    // to_string()函数，可以将内容转换为字符串类型，用法；to_string(内容)

    string msg="我叫做；"+name+"，我的专业是"+major+"，我的年龄是"+to_string(age)+"岁，身高是"+to_string(height);
    cout<<msg<<endl;
    
    return 0;
}
