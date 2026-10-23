//
// Created by Sun198 on 2026/10/20.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    cout<<"欢迎来到本动物园\n请输入你的身高(cm)"<<endl;
    int height;
    cin>>height;

    if(height > 120)
    {
        cout<<"您的身高超过120cm，游玩需要花费10元购票"<<endl;
    }
    else
    {
        cout<<"您的身高未超过120cm，可以免费游玩"<<endl;
    }
    cout<<"祝您游玩愉快"<<endl;
    return 0;
}