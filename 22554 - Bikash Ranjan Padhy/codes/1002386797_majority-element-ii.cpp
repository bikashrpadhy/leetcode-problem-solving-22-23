class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> res;
        int n= nums.size();

        unordered_map<int, int> mp;
        for(int num: nums)
        {
            mp[num]++;
        }
        for(auto el: mp)
        {
            if(el.second>n/3) res.push_back(el.first);
        }
        return res;

    }
};