/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void generate_permutations(vector<int> nums, vector<vector<int>>& res, vector<int> temp, int size, int max){
        if(size==max)
        {
            res.push_back(temp);
            return;
        }
        if(size<max)
        {
            for(int i=0;i<max;i++)
            {
                if(temp.size()==0||(temp.size()>0 && find(temp.begin(), temp.end(), nums[i])==temp.end()))
                {
                    temp.push_back(nums[i]);
                }
                else
                    continue;
                generate_permutations(nums, res, temp, size+1, max);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        int max = nums.size();
        generate_permutations(nums, res, temp, 0, max);
        return res;
    }
};
// @lc code=end

