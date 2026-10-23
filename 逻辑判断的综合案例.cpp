//
// Created by Sun198 on 2026/10/21.
//
#include<iostream>
#include"random"
using namespace std;

int get_random_num(int min, int max)
{
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    // 生成一个随机数并输出
    int random_number=dis(gen);
    return random_number;

}

int main()
{
    system("chcp 65001");
    // 第一份信息：1-10的数字，代表扑克牌1-10
    int num=get_random_num(1,10);

    // 第二份信息：字符串，红色或者黑色，代表扑克牌的花色
    string color=get_random_num(0,1)? "红色":"黑色";

    // 第三份信息：字符串，如果为红色产出红桃或者方块，如果是黑色产出黑桃或者梅花
    string suit;
    if (color=="红色")
    {
        suit = get_random_num(0,1)?"红桃":"方块";
    }
    else
    {
        suit=get_random_num(0,1)?"黑桃":"方块";
    }
    cout<<num<<"    "<<color<<"      "<<suit<<endl;

    // 先猜数字，成功了再猜颜色，成功了再猜花色

    int guess_num;
    cout<<"请输入猜测的牌号，1-10"<<endl;
    cin>>guess_num;
    if(guess_num==num)
    {
        int color_num;
        cout<<"请输入猜测的花色，红色扣1，黑色扣0"<<endl;
        cin>>color_num;
        if ((color_num?"红色":"黑色")==color)
        {
            if (color_num==1)
            {
                int suit_num;
                cout<<"请输入猜测的花型,红桃扣1，方块扣0"<<endl;
                cin>>suit_num;
                if ((suit_num?"红桃":"方块")==suit)
                {
                    cout<<"挑战成功，你真棒"<<endl;
                }
                else
                {
                 cout<<"游戏结束"<<endl;
                }
            }
            else
            {
                int suit_num2;
                cout<<"请输入猜测的花型，黑桃扣1，方块扣0"<<endl;
                cin>>suit_num2;
                if ((suit_num2?"黑桃":"方块")==suit)
                {
                    cout<<"挑战成功，你真棒"<<endl;
                }
                else
                cout<<"游戏结束，差一步美满"<<endl;
{
                }

            }
        }
        else
        {
            cout<<"游戏结束"<<endl;
        }
    }
    else
    {
        cout<<"游戏结束"<<endl;
    }
    return 0;
}
