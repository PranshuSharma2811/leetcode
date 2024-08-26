/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
// @lc code=end

