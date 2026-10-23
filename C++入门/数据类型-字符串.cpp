//
// Created by Sun198 on 2026/10/18.
//
#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // c语言风格的字符串
    char s1[]="Mark Selby";     //字符数组的形式,不可更改变量值
    char s2[]="塞大师";          //指针形式的字符串

    //c++风格的字符串
    string s3="c++ string";     //c++ string 类型的字符串

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    return 0;
}
