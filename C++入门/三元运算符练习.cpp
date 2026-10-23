//
// Created by Sun198 on 2026/10/19.
//
#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    int score1;
    cout<<"请输入小明第一次考试成绩"<<endl;
    cin>>score1;

    int score2;
    cout<<"请输入小明第二次考试成绩"<<endl;
    cin>>score2;

    string value= score1 < score2? "买糖" : "不买糖";
    cout<<"对小明的考试成绩进行判断，结果是："<<value<<endl;

    return 0;
}