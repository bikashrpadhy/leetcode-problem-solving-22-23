class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int, int> mp;
        for(auto num: nums) mp[num]++;

        int maj= mp.begin()->first;
        int maj_freq= mp.begin()->second;
        for( auto element: mp)
        {
            if(element.second> maj_freq) 
            {
                maj= element.first;
                maj_freq= element.second;
            }
        }
        return maj;
    }
};