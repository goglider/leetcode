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
            for(int i=0;i<nums.size();i++)
            {
                temp.push_back(nums[i]);
                int x=nums[i];
                nums.erase(nums.begin()+i);
                generate_permutations(nums, res, temp, size+1, max);
                nums.insert(nums.begin()+i, x);
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

