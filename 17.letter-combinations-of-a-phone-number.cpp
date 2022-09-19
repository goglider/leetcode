/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    void addlet(vector<string> &v, string digits, vector<string> &temp, int total, int size, int x)
    {
        int d=digits[x]-48;
        int pos=0;
        for (int k = 0; k < size; k++)
        {
            for (int i = 0; i < v.at(d).size(); i++)
            {   
                for (int j = 0; j <total/v.at(d).size(); j++)
                {
                    temp.at(pos)+=v.at(d).at(i);
                    pos++;
                }
            }
        }
        size*=v.at(d).size();
        total/=v.at(d).size();
        if(x==digits.size()-1)
            return;
        else
            addlet(v, digits, temp, total, size, x+1);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> tton = {"Extra", "String", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
            if(digits=="")
        return ans;
        int length=digits.size();
        int total=1, size=1;
        for(int i=0; i<digits.size(); i++)
        {
            total*=tton.at(digits.at(i)-48).size();
        }
        for (int i = 0; i < total; i++)
        {
            ans.push_back("");
        }
        addlet(tton, digits, ans, total, size, 0);
        return ans;
    }
};
// @lc code=end