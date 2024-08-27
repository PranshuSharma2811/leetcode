/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int sell = 0;
        for(int i = 0;i<n;i++){
            if(min>prices[i]){
                min = prices[i];
            }
            if(sell<(prices[i]-min)){
                sell = (prices[i]-min);
            }
        }
        return sell;
    }
};
// @lc code=end

