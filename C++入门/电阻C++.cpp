//
// Created by Sun198 on 2026/10/16.
//
#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    double r1,r2,r3,r4,r5;
    cout<<"请输入r1，r2，r3，r4，r5："<<endl;
    cin>>r1>>r2>>r3>>r4>>r5;
    double r=r1*(r2+r3*(r4+r5)/(r3+r4+r5))/(r1+r2+r3*(r4+r5)/(r3+r4+r5));
    cout<<"总电阻为"<<fixed<<setprecision(2)<<r<<endl;
    return 0;


}
