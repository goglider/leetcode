/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        unordered_map <char, int> mp={{'(', 1},{'{', 2}, {'[', 3}, {')', -1}, {'}', -2}, {']', -3}};
        stack <char> st;
        for(auto ch:s)
        {
            if(mp[ch]>0)
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(mp[ch]+mp[st.top()]==0)
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

