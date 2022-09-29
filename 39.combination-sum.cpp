/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void generate_combinations(vector<int> candidates, vector<vector<int>>& res, vector<int> curr, int target, int total)
    {
        if(total==target)
        {
            sort(curr.begin(), curr.end());
            if(find(res.begin(), res.end(), curr) != res.end())
                return;
            else
            {
                res.push_back(curr);
                return;
            }
        }
        if(total<target)
        {
            for(int i=0;i<candidates.size();i++)
            {
                curr.push_back(candidates[i]);
                generate_combinations(candidates, res, curr, target, total+candidates[i]);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        generate_combinations(candidates, res, curr, target, 0);
        return res;
    }
};
// @lc code=end

