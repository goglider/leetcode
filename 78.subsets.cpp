/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    void generate_subsets(vector<vector<int>>& res, vector<int> nums, vector<int> curr, int index){
        if(index==nums.size())
            return;
        res.push_back(curr);
        for(int i=index+1;i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            generate_subsets(res, nums, curr, i);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        generate_subsets(res, nums, curr, -1);
        return res;
    }
};
// @lc code=end

