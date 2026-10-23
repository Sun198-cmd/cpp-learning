//
// Created by Sun198 on 2026/10/12.
//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 1，变量的声明（定义），变量类型 变量名；
    int age;    // 整型的变量声明
    float height;  //实型的变量声明
    char gender;   //字符型变量声明
    string name;   //字符串型变量声明

    // 2，变量的赋值，变量名=变量值
    age=21;
    height=180.5;
    gender='M';
    name="小明";

    //3.变量的使用（取值），直接使用变量名称即可
    cout<<"age="<<age<<endl;
    cout<<name<<"的年纪："<<age<<endl;
    cout<<name<<"的体重："<<height<<endl;
    cout<<name<<"的性别："<<gender<<endl;


    return 0;
}
    /* 1，什么是变量？有什么作用？
     * · 变量可以在程序运行过程中记录数据
     * · 变量可以被重复使用
     * 2，变量的定义（声明）与赋值语法
     * ·变量声明：变量类型 变量名
     * ·变量赋值：变量名=变量值；
     * 3，常见的变量类型：如上四种 */
