class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> st1;
        unordered_set<int> st2;

        for(int i: nums1)st1.insert(i);

        for(int i: nums2)st2.insert(i);

        vector<int> tmp;
        for(auto &iter: st1)
        {
            if(st2.find(iter)==st2.end()) // not found
            {tmp.push_back(iter);}
        }
        vector<vector <int>> ans;
        ans.push_back(tmp);
        tmp.clear();
        for(auto &iter: st2)
        {
            if(st1.find(iter)==st1.end()) // not found
            {tmp.push_back(iter);}
        }
        ans.push_back(tmp);
        tmp.clear();
        return ans; 

        
    }
};