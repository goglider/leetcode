/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int i;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int al=a.size(), bl=b.size(), carry=0;
        while(a.size()!=b.size())
        {
            if(a.size()<b.size())
            {
                a+='0';
            }
            else
            {
                b+='0';
            }
        }
        for (i = 0; i < max(al,bl); i++)
        {
            a[i]=a[i]+(1?b[i]=='1':0)+carry;
            if (a[i]>'1')
            {
                a[i]-=2;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }
        if(carry==1)
        {
            a+='1';
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
// @lc code=end

