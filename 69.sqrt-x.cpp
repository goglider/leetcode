/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        for(long i=0;i<x;i++)
        {
            if((i*i)<=x)
                continue;
            else if((i*i)>x)
                return i-1;
        }
        return 1;
    }
};
// @lc code=end

