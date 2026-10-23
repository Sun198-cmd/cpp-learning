//
// Created by Sun198 on 2026/10/21.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    cout<<"请选择直播的场景，输入对应的场景代码数字"<<endl;
    int num;
    cout<<"1,仅仅输出屏幕"<<"     "<<"2,输出屏幕+摄像头画面"<<"     "<<"3,仅输出摄像头"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:
            cout<<"已经切换成场景1"<<endl;
            break;
          case 2:
            cout<<"已经切换成场景2"<<endl;
            break;
          case 3:
            cout<<"已经切换成场景3"<<endl;
            break;

    }

    return 0;
}