
/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int count=0;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[count]){
                count++;
                nums[count]=nums[i];
            }
        }
        return count+1;
    }
};
// @lc code=end

