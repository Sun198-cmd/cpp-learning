//
// Created by Sun198 on 2026/10/16.
//
#include<cstdio>
#include<studio.h>
int main(void)
{
    printf("请输入r1,r2,r3,r4,r5");
    double r1,r2,r3,r4,r5;
    scanf("%1f %1f %1f %1f",&r1,&r2,&r3,&r4,&r5);
    double r;
    r=r1*(r2+r3*(r4+r5)/(r3+r4+r5))/(r1+r2+r3*(r4+r5)/(r3+r4+r5));
    printf("总电阻为%.2f",r);
    return 0;

}