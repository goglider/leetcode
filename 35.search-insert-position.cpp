/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int InsertPos(vector<int>& nums, int x, int low, int high){
        int mid=(low+high)/2;
        int ans=0;
        if(nums[mid]==x)
        {
            return mid;
        }
        else if(nums[mid]<x&&nums[mid+1]>x)
        {
            return mid+1;
        }
        else if(nums[mid]>x)
        {
            return InsertPos(nums, x, low, mid-1);
        }
        else if(nums[mid]<x)
        {
            return InsertPos(nums, x, mid+1, high);
        }
        else
        {
            return mid;
        }
        return 0;
    }
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0)
            return 0;
        if(nums[nums.size()-1]<target)
            return nums.size();
        if(nums[0]>=target)
            return 0;
        return InsertPos(nums, target, 0, nums.size()-1);
    }
};
// @lc code=end

