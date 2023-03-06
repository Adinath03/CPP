/* Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, 
or false otherwise. */

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        unordered_set<int> st;
        for(auto i:mp)
        {
            if(st.find(i.second)==st.end())
            {
                st.insert(i.second);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};