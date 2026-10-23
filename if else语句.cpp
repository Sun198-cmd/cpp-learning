//
// Created by Sun198 on 2026/10/20.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    /*
     * if(判断)
     * {
     *      .....code
     *  }
     *  else
     *  {
     *      ......code
     *  }
     */

    int gift;
    cout<<"直播间家人刷刷跑车，刷的扣1，不刷的扣2"<<endl;
    cin>>gift;

    if(gift==1)
    {
        cout<<"感谢大哥送来的跑车"<<endl;
    }
    else
    {
        cout<<"管理员把这帮假粉丝踢出直播间"<<endl;
    }

    return 0;
}