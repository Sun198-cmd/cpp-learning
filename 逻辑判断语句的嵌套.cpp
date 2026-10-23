//
// Created by Sun198 on 2026/10/21.
//
#include<iostream>
using namespace std;\
int main()
{
    system("chcp 65001");

    int num;
    cout<<"请输入猜想的数字"<<endl;
    cin>>num;

    if (num==5)
    {
        cout<<"第一次就猜对了，你真棒"<<endl;
    }
    else
    {
        cout<<"不对，请再猜一次"<<endl;
        cin>>num;

        if (num==5)
        {
            cout<<"第二次猜对了，不错"<<endl;
        }
        else
        {
            cout<<"不对，请再猜一次"<<endl;
            cin>>num;

            if (num==5)
            {
                cout<<"第三次猜对了，可以可以"<<endl;
            }
            else
            {
                cout<<"不对，最后一次机会"<<endl;
                cin>>num;

                if (num==5)
                {
                    cout<<"对了"<<endl;
                }
                else
                {
                    cout<<"你废了"<<endl;
                }
            }
        }
    }
    return 0;
}