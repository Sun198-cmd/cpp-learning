//
// Created by Sun198 on 2026/10/19.
//
#include <iostream>
#include<cstring>   //C语言的字符串库
using namespace std;
int main()
{
    system("chcp 65001");

    // ==相等 ！=不等 <小于 >大于 <=小于等于 >=大于等于
    int num1=3;
    int num2=5;
    bool r1=num1==num2;
    bool r2=num2!=num1;
    cout<<r1<<endl;
    cout<<r2<<endl;

    // 字符串的比较
    // C语言风格字符串 char s[] char *s2 "hello",strcmp()
    // C语言风格字符串 如果直接应用比较运算符，比较的是内存地址，而不是内容
    char s1[]="hello";
    char *s2="hello";
    cout<<"s1=s2 "<<(s1==s2)<<endl;

    // strcmp进行比较，0为相等，-1是小于，1是大于
    cout<<"s1=s2 "<<strcmp(s1,s2)<<endl;

    // C++风格字符串，string类型的都是C++风格字符串
    // 在比较中只要有1个C++风格字符串 就可以用比较运算符了
    string s5 = "a";    //C++风格
    char *s6="a";       //C语言风格
    cout<<"s5=s6 "<<(s5==s6)<<endl;

    return 0;

}