/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ,presum = 0;
        unordered_map<int,int> mp ;
        mp[0]=1;
        for(int i =0;i<nums.size();i++){
            presum += nums[i];
            int remove = presum - k;
            count+=mp[remove]; 
            mp[presum]+=1;
        }
        return count;
    }
};
// @lc code=end

