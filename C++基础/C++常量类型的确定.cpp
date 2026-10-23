//
// Created by Sun198 on 2026/10/16.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    //不带数字后缀的类型确定:整数的类型最小是int，小数的类型最小是double
    cout<<"10的字节数是"<<sizeof(10)<<endl;
    cout<<"1234567890123456的字节数是"<<sizeof(1234567890123456)<<endl;
    cout<<"3.14的字节数是"<<sizeof(3.14)<<endl;

    //带有后缀的
    //U是无符号的意思
    10U;    //无符号整数int

    //L是long的意思
    cout<<"10L的字节数是："<<sizeof(10L)<<endl;

    //F float的意思
    cout<<"3.14F的字节数是；"<<sizeof(3.14F)<<endl;
    cout<<"3.14的字节数是；"<<sizeof(3.14)<<endl;


    return 0;
}

/*  1.在C++中，字面量的类型是自动确定的
 *  ·整数默认为int，如范围不足会自动扩容，顺序为：int——>_uin>long>ulong>long long>u long long(后缀大小写均可)
 *  ·浮点数默认为double，范围不足会自动扩容到long double
 *  2.可以给字面量添加后缀，指定类型 */