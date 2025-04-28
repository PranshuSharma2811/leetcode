/*
 * @lc app=leetcode id=1748 lang=cpp
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int sum = 0;
        for (auto& pair : freq) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        return sum;
    }
};
// @lc code=end

