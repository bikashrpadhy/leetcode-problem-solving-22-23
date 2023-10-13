class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int, int> mp;
        for(int num: nums)
        {
            if(num%2==0) mp[num]++;
        }
        if(mp.empty()) return -1;
        
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