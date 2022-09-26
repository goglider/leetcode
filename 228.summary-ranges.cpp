/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string temp="";
        vector<string> ans;
        int j, flag=0;
        long prev;
        if(nums.empty())
        {
            return ans;
        }
        prev=nums.at(0);
        temp+=to_string(prev);
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums.at(i)==prev+1)
            {
                if (flag==0)
                {
                    temp+="->";
                    flag=1;
                }
            }
            else
            {
                if(flag==0)
                {
                    ans.push_back(temp);
                    flag=0;
                    temp="";
                    temp+=to_string(nums.at(i));
                }
                else
                {
                    temp+=to_string(prev);
                    ans.push_back(temp);
                    flag=0;
                    temp="";
                    temp+=to_string(nums.at(i));
                }
            }
            prev=nums.at(i);
        }
        if(flag==0)
        {
            ans.push_back(temp);
        }
        else
        {
            temp+=to_string(prev);
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end