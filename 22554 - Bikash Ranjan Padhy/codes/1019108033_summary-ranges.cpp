class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans;
        if(!nums.size())return ans;

        int prev= nums[0], first=nums[0], last,i;
        for(i=1; i< nums.size(); i++)
        {
            if(nums[i]!=prev+1)
            {
                last= prev;
                if(first!=last)
                    ans.push_back(to_string(first)+ "->"+ to_string(last));
                else 
                    ans.push_back(to_string(first)); 
                first= nums[i];
                prev= first;
            }
            else // nums[i]== prev+1
            prev++;
        }
        last= nums[i-1];
        if(first!=last)
            ans.push_back(to_string(first)+ "->"+ to_string(last));
        else 
            ans.push_back(to_string(first)); 
        return ans;      
    }
};