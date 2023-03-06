/*
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int mid = start + (end-start)/2;
        while(start<end)
        {
            if(nums[mid]<nums[mid+1])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end -start)/2;
        }
        return start;
    }
};
