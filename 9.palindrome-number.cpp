/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long temp=0;
        int og=x;
        if(x<0)
            return false;
        while(x!=0)
        {
            int dig = x%10;
            temp*=10;
            temp+=dig;
            x/=10;
        }
        if(temp==og)
            return true;
        else
            return false;        
    }
};
// @lc code=end

