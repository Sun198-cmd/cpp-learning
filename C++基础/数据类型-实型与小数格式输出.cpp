//
// Created by Sun198 on 2026/10/13.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // float 单精度浮点数 4字节 6-7有效位数
    // 有效位数：整数位、小数点、小数位
    float num1=1234567890;      //只提供了七位的有效输出
    float num2=1.234567890;     //同样也只提供了七位的有效输出

    cout<<fixed;            //设置为小数显示
    cout.width(20);    //设置显示的最大宽度（最大位数）
    cout<<num1<<endl;
    cout<<num2<<" "<<sizeof(num2)<<endl;

    // double 双精度浮点数，8字节，15-16有效位
    double num3=1234567890.1234567890;
    cout<<num3<<" "<<sizeof(num3)<<endl;

    // long double 长精度(多精度)浮点数，16字节，18-19有效位
    long double num4=1234567890.1234567890;
    cout<<num4<<" "<<sizeof(num4)<<endl;

    return 0;
}