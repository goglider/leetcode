/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void generate_parenthesis(vector<string>& res, string temp, int open, int close, int n)
    {
        if(close==n)
        {
            res.push_back(temp);
            return;
        }
        if(open<n)
        {
            generate_parenthesis(res, temp+'(', open+1, close, n);
        }
        if(close<open)
        {
            generate_parenthesis(res, temp+')', open, close+1, n);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n==0)
        {
            return res;
        }
        generate_parenthesis(res, "", 0, 0, n);
        return res;
    }
};
// @lc code=end