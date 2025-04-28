/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str(s.size(),' ');
        int n =str.size();
        for(int i =0;i<n;i++){
            str[indices[i]] = s[i];
        }
        return str;
    }
};
// @lc code=end

