/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size() -1;
        for(int i =0;i<n+1;i++){
            if(nums[i]==0){
                swap(nums[i],nums[n]);
                n--;
            }
        }
        
    }
};
// @lc code=end

