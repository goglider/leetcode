/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    int LengthfromMid(string str, int left, int right)
    {
        while(left>=0&&right<str.size()&&str[left]==str[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s==""||s.size()<1)
            return "";
        if(s.size()==1)
            return s;
        int len=0;
        int start=0;
        int pal=0;
        for(int i=0;i<s.size();i++)
        {
            int len1 = LengthfromMid(s, i, i);
            int len2 = LengthfromMid(s, i, i+1);
            len = std::max(len1, len2);
            if (len>pal)
            {
                start=i-(len-1)/2;
                pal=len;
            }   
        }
        return s.substr(start, pal);
    }
};
// @lc code=end

