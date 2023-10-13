class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        int n= nums.size(), sum=0;
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        
        for(const auto& elm: mp)
        {
            int count= elm.second;
            sum+= (count*(count-1))/2;
        }
        return sum;
    }
};