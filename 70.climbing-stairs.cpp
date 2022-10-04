/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int sol[100];
    int solvequestion(int n)
    {
        if(n==1||n==0)
            return 1;
        if(n<0)
            return 0;
        if(sol[n])
            return sol[n];
        sol[n]=solvequestion(n-1)+solvequestion(n-2);
        return sol[n];
    }
    int climbStairs(int n) {
        int ans = solvequestion(n);
        return ans;
    }
};
// @lc code=end

