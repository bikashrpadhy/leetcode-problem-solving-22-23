class Solution {
private: 
    int max_digit(int num)
    {
        int maxd=0, d;
        while(num>0)
        {
            d= num%10;
            maxd= d> maxd? d: maxd;
            num/= 10;
        }
        return maxd;
    }
public:
    int maxSum(vector<int>& nums) 
    {
        vector<int> maxds(10, 0);
        int maxsum=-1;
        // vector<bool> added(10, false);
        for(int i=0; i< nums.size(); i++)
        {
            int maxd= max_digit(nums[i]);

            if(maxds[maxd])
            maxsum= max(maxsum, maxds[maxd]+nums[i]);

            maxds[maxd]= max(nums[i], maxds[maxd]); 
        }

        for(auto elm: maxds)cout<< elm<<", ";
        cout<<endl;
        
        return maxsum;
        
    }
};