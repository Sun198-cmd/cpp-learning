//
// Created by Sun198 on 2026/10/12.
//
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int bmi;        //声明
    bmi=30;         //赋值
    cout<<"小明现在的BMI是:"<<bmi<<endl;
;
    //再一次使用赋值语句，就可以修改变量内记录的值
    bmi=26;
    cout<<"经过一个月的减肥，小明现在的BMI是:"<<bmi<<endl;

    //变量的值可以修改，但是类型是不能变的

    //进行数学计算，可以用：+，-，*，
    bmi=bmi-2;
    cout<<"经过一个月的减肥，小明现在的BMI是:"<<bmi<<endl;

    return 0;
}
    /* 1，变量的特征是什么？
     * ·变量记录的值是可以发生改变的
     * 再次执行赋值语句，即可改变记录值
     * 2，赋值语句的执行逻辑是？
     * ·先计算等号右侧得到结果，再将结果赋值给等号左侧变量*/