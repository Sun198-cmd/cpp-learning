//
// Created by Sun198 on 2026/10/18.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    // 单目（只有1个操作数）操作符；+ -
    int num1=+10;   //+表示正数
    int num2=-20;   //-表示负数
    cout<<num1<<","<<num2<<endl;

    // 双目（有两个操作数）操作符：+ - * / %
    int num3=5+5;
    int num4=5-5;
    int num5=5*5;
    int num6=10/3;
    int num7=10%3;
    cout<<"5+5="<<num3<<endl;
    cout<<"5-5="<<num4<<endl;
    cout<<"5*5="<<num5<<endl;
    cout<<"10/3="<<num6<<endl;
    cout<<"10%3="<<num7<<endl;

    //  单目操作符；++(+1)，--(-1)
    cout<<"---------"<<endl;
    int a = 2;
    int b = ++a;
    cout<<"a="<<a<<endl;        //  前置递增，在赋值语句（=）之前，先执行加1的操作
    cout<<"b="<<b<<endl;

    int c = 2;
    int d = c++;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;        //  后置递增；在赋值语句之后，再执行+1的操作

    cout<<"---------"<<endl;
    int e = 2;
    int f = --e;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;

    int g = 2;
    int h = g--;
    cout<<"g="<<g<<endl;
    cout<<"h="<<h<<endl;




    return 0;
}