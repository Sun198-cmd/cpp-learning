//
// Created by Sun198 on 2026/10/19.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    /*
     * if (判断)
     * {
     *      code;
     *      code;
     *      ...
     * }
     */
    cout<<"今天发工资了"<<endl;
    int money;
    cout<<"请输入小明发的工资"<<endl;
    cin>>money;

    // 开始逻辑判断
    if(money>=10000)
    {
        //满足条件才会执行这里面的代码
        cout<<"把电脑修了，花费9501"<<endl;
        money-=9501;
    }

    cout<<"今天发的工资还剩下"<<money<<"元。"<<endl;
    return 0;
}
