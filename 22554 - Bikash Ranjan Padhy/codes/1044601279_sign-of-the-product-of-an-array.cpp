class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int prod=1;
        for(const auto t: nums)
        {
            if(t==0)return 0;
            if(t<0 ) prod*=-1;
        }
        return prod;
        
    }
};