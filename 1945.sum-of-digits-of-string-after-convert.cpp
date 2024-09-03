/*
 * @lc app=leetcode id=1945 lang=cpp
 *
 * [1945] Sum of Digits of String After Convert
 */

// @lc code=start
class Solution {
public:
    int getLucky(string s, int k) {
         string newStr = "";
        for(char ch : s){
            newStr += to_string((int)ch-'a'+1);
        }
        // cout<<newStr<<endl;
        int num = 0;
        for(char ch : newStr){
            num += (ch-'0');
        }
        k--;
        while(k--){
            int temp = 0;
            while(num){
                temp += (num%10);
                num/=10;
            }
            num = temp;
            }
        return num;
    }
};
// @lc code=end

