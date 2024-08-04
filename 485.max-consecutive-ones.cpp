/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
          int max_con =0 ;
        int count = 0 ;
        int n = nums.size();
        for(int i =0;i<n;i++){
                if(nums[i]==1){
                    count++;
                }
                if(count>max_con){
                    max_con=count;
                }
                if(nums[i]!=1){
                    count=0;
                }
        }
        return max_con;
    }
};
// @lc code=end

