//
// Created by Sun198 on 2026/10/21.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    /*
     * if (条件)
     * {}
     * else if (条件)
     * {}
     * else if(条件)
     * {}
     * 。。。。。。
     * else
     * {}
     */
    int num;
    cout<<"请输入猜想的数字"<<endl;
    cin>>num;

    if (num<5)
    {
        cout<<"你猜小了"<<endl;
    }
    else if (num>5)
    {
        cout<<"你猜大了"<<endl;
    }
    else
    {
        cout<<"你猜对了，你真棒！"<<endl;
    }
    return 0;

}