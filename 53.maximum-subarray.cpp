/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, res=-10000;
        for(auto i:nums)
        {
            if(sum<=0)
            {
                sum=0;
            }
            sum+=i;
            if(sum>=0)
                res=max(sum, res);
            else
                res=max(i, res);
        }
        return res;
    }
};
// @lc code=end

