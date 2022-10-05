/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    map<int, map<int, int>>paths;
    int unique_path(int m, int n)
    {
        if(m==1&&n==1)
            return 1;
        if(m==0||n==0)
            return 0;
        if(paths[m][n]!=NULL)
            return paths[m][n];
        paths[m][n]=unique_path(m-1, n)+unique_path(m, n-1);
        return paths[m][n];
    }
    int uniquePaths(int m, int n) {
        int ans = unique_path(m, n);
        return ans;
    }
};
// @lc code=end

