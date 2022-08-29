/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp = 0, i, j;
        vector<int> arr;
        for(i=0;i<nums.size();i++)
        {   
                for(j=i+1;j<nums.size();j++)
                {
                    if(nums[i]+nums[j]==target)
                    {
                                arr.push_back(i);
                                arr.push_back(j);
                                return arr;
                    }
                }
        }
        return arr;        
    }
};
// @lc code=end

