//
// Created by Sun198 on 2026/10/25.
//

#include "guess_number.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));
    int secret = rand() % 100 + 1;

    int guess;
    int count = 0;

    while (true) {
        cout << "猜一个 1-100 的数：";
        cin >> guess;
        count++;

        // 这里写三个分支：
        // 1. guess > secret → 输出"大了"
        // 2. guess < secret → 输出"小了"
        // 3. 相等 → 输出"猜中了，用了 X 次"，然后 break

        if (guess > secret) {
            cout<<"大了"<<endl;
        }
        else if (guess < secret) {
            cout<<"小了"<<endl;
        }
        else {
            cout<<"猜对了，用了"<<count<<"次。"<<endl;
            break;
        }
    }

    return 0;
}