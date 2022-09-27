/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i, high, low, sum;
        vector<int> temp;
        for(i=0;i<nums.size()-2;i++)
        {
            if (i==0||(i>0 && nums[i]!=nums[i-1]))
            {
                sum=0-nums[i];
                low=i+1;
                high=nums.size()-1;
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        temp = { nums[i], nums[low], nums[high] };
                        ans.push_back(temp);
                        while(low<high && nums[low]==nums[low+1])
                            low++;
                        while(low<high && nums[high]==nums[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]>sum)
                    {
                        high--;
                    }
                    else 
                    {
                        low++;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

