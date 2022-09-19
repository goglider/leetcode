/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string findcommon(string x, string y)
    {
        string com;
        for(int i=0;i<max(x.size(), y.size());i++)
        {
            if(x[i]==y[i])
            {
                com.push_back(x[i]);
            }
            else
                return com;
        }
        return com;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string temp;
        temp=strs.at(0);
        for(int i=0; i<strs.size();i++)
        {
            temp=findcommon(temp, strs.at(i));
            ans=temp;
        }
        return ans;
    }
};
// @lc code=end

