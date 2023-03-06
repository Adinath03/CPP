/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int binarysearch(vector<int> nums, int low,int high, int target)
    {
        if(high<low)
            return -1;
        int mid = (high+low)/2;
        if(target == nums[mid])
            return mid;
        if(target>mid)
            return binarysearch(nums, (mid+1), high, target);
        return binarysearch(nums, low, (mid-1), target);
    };
    
    int findpivot(vector<int> nums, int low,int high)
    {
        if(high<low)
            return -1;
        if(high==low)
            return low;
        int mid = (high+low)/2;
        if(mid<high && nums[mid]>nums[mid+1])
            return mid;
        if(mid>low && nums[mid]<nums[mid-1])
            return mid-1;
        if (nums[low] >= nums[mid])
            return findpivot(nums, low, mid - 1);
        return findpivot(nums, mid + 1, high);
    };
    int pivotedBinarySearch(vector<int> nums, int n, int target)
{
    int pivot = findpivot(nums, 0, n - 1);
 
    if (pivot == -1)
        return binarysearch(nums, 0, n - 1, target);
 
    if (nums[pivot] == target)
        return pivot;
 
    if (nums[0] <= target)
        return binarysearch(nums, 0, pivot - 1, target);
 
    return binarysearch(nums, pivot + 1, n - 1, target);
};
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = pivotedBinarySearch(nums,n,target);
            
        return k;
};
};

