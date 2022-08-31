/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i;
        for(i=s.size()-1;s[i]==' ';i--);
        for(int j=0;j<=i;j++)
        {
            count++;
            if(s[j]==' ')
            {
                count=0;
            }
        }
        return count;
    }
};
// @lc code=end