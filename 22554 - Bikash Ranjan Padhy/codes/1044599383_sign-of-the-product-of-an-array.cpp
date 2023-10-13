class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int neg=0;
        for(const auto t: nums)
        {
            if(t==0)return 0;
            if(t<0 ) neg++;
        }
        return neg%2==0? 1:-1;
        
    }
};