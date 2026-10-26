//
// Created by Sun198 on 2026/10/26.
//
#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    // 练习1：用for打印1到10，每个数后加个空格
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 练习2：用for求1到100的和，输出结果
    int sum = 0;
    for (int num = 1; num <= 100; num++) {
        sum += num;
    }
    cout << sum << endl;
    cout << endl;

    // 练习3：用for打印1到100的所有偶数
    for (int number = 2; number <= 100; number += 2) {
        cout << number << " ";
    }


    return 0;
}
