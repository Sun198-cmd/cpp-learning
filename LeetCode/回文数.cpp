//
// Created by Sun198 on 2026/10/25.
//


// 第九题，回文数
// 思路，用%10拆位。用/10去位，反转后与原数比较



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        int original=x;
        long long reversed=0;

        while(x>0){
            int digit=x%10;
            reversed=reversed*10+digit;
            x=x/10;
        }
        return reversed==original;
    }
};