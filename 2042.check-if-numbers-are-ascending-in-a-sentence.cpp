/*
 * @lc app=leetcode id=2042 lang=cpp
 *
 * [2042] Check if Numbers Are Ascending in a Sentence
 */

// @lc code=start
class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = INT_MIN;
        stringstream ss(s);
        string token;
        
        while (ss >> token) {
            if (isdigit(token[0])) {
                int num = stoi(token);
                if (num <= prev) return false;
                prev = num;
            }
        }
        
        return true;

    }
};
// @lc code=end

