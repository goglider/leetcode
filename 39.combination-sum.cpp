/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void generate_combinations(vector<int> candidates, vector<vector<int>>& res, vector<int> curr, int target, int total, int index)
    {
        if(total==target)
        {
            res.push_back(curr);
            return;
        }
        if(total<target)
        {
            for(int i=index;i<candidates.size();i++)
            {
                curr.push_back(candidates[i]);
                generate_combinations(candidates, res, curr, target, total+candidates[i], i);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        generate_combinations(candidates, res, curr, target, 0, 0);
        return res;
    }
};
// @lc code=end

