/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (auto i = digits.rbegin(); i != digits.rend(); i++)
        {
            if(*i<9)
            {
                (*i)++;
                return digits;
            }
            else
            {
                (*i)=0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end