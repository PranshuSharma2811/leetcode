/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i =1 ;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
    }
        if(nums[0]<nums[nums.size()-1]){
            count++;
        }
       return count<=1;
    }
};
// @lc code=end

