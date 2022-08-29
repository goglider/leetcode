/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128] = {0};
        int max = 0, newmax=0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int k = 0; k<128; k++)
                arr[k]=0;
            newmax=0;
            for (int j = i; j < s.size(); j++)
            {
                arr[s[j]]++;
                if(arr[s[j]]>1)
                {
                    max=std::max(max, newmax);
                    break;
                }
                newmax++;
            }
            max=std::max(max, newmax);
        }
        return max;        
    }
};
// @lc code=end

