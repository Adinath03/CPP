/* Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must be unique and you may return the result in any order. */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> seen;
        vector<int> ans;
        for(auto i:nums1)
        {
            seen.insert(i);
        }
        for(auto i:nums2)
        {
            if(seen.find(i)!=seen.end())
            {
                ans.push_back(i);
                seen.erase(i);
            }
        }
        return ans;
    }
    
};