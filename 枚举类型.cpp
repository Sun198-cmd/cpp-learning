//
// Created by Sun198 on 2026/10/22.
//
#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    /*
     * enum 枚举类型名称{
     * 枚举元素，
     * 枚举元素，
     * ....,
     * .....
     * }
     */
    // 询问小朋友喜欢的颜色，红黄蓝三种选一个
    enum color {
        RED,    // 默认是0
        YELLOW, // 默认是1
        BLUE,   // 默认是2
    };

    int num;
    cout<<"小朋友们你们喜欢什么颜色，扣0红色，1黄色，2蓝色"<<endl;
    cin>>num;

    switch (num) {
        case RED:
            cout<<"小朋友喜欢红色！"<<endl;
            break;

        case YELLOW:
            cout<<"小朋友喜欢黄色！"<<endl;
            break;

        case BLUE:
            cout<<"小朋友喜欢蓝色！"<<endl;
            break;
        default:
            cout<<"您提供的数字有误"<<endl;
    }

    return 0;
}
// 1，枚举是一种用户自定义类型，可以将数字符号定义为具体的符号
/* 2，枚举一般用于对各种不同的状态，定义可识别的符号
 * · 如在某个场景中用1，2，3来表示红黄蓝
 * · 那么既可用枚举来对1，2，3进行具象化
 * · 枚举类型本质数字
 * · 默认数字序号从1开始递增，也可以手动指定
 */
// 3.枚举可以配合switch case语句一同使用