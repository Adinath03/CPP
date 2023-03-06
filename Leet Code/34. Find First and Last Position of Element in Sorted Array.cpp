/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = -1, last = -1;
        int i=0, j=nums.size()-1;
        int count = 0,count1 = 0;
        while(i<=j)
        {
            if(target == nums[i])
            {
                first = i;
                count++;
            }
            if(target == nums[j])
            {
                last = j;
                count1++;
            }
            if(count == 0)
                i++;
            if(count1 == 0)
                j--;
            if((count == 1)&(count == 1))
            {
                ans.push_back(first);
                ans.push_back(last);
                return ans;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};