//
// Created by Sun198 on 2026/10/25.
//
class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum=0;
            while(num>0){
                sum += num %10;
                num /= 10;
            }
            num=sum;
        }
        return num;
    }
};