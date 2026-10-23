//
// Created by Sun198 on 2026/10/12.
//
#include<iostream>
#include<windows.h>
using namespace std;
#define FAT_BMI 28
#define J2C_RATE 4.19
/* 符号常量：#define 名称（标识符） 常量值
 * 符号常量定义在代码的头部
 * 符号常量的定义不需要分号结尾
 * */


//引入中文的方式：方式1：引入windows.h库
//             方式2：system("chcp 65001");
int main()
{
    system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    //使用符号常量的语句就是正常的代码，需要写在main函数中
    //如何使用：使用符号常量 就直接用它都名字即可
    cout<<FAT_BMI<<endl;
    cout<<"焦耳转卡路里需要除以："<<J2C_RATE<<endl;

    return 0;
}
/*总结：1，符号常量是什么，有什么用？：
 *   ·符号常量是指使用标识符命名的常量
 *   ·可以基于其标识符（名称）重复使用常量值，无需再次书写
 *     2，使用方法见上
 *     3，使用细节：
 *     ·定义在代码头部 main函数之前 先定义后使用
 *     ·符号常量名是标识符号，符合数字，字母，下滑线组合的要求且数字不可开头
 *     ·字母建议全部大写（和后续学习的变量做区分）*/