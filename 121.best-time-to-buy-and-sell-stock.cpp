/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices.at(0);
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]-buy<0)
                buy=prices[i];
            res=max(res, prices[i]-buy);
        }
        return res;
    }
};
// @lc code=end

