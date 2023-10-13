class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n= nums.size(), m= queries.size(), sum=0;
        
        sort(nums.begin(), nums.end());
        
        vector<int> cumulative_sum;
        
        for(int i=0; i<n; i++)
        {
            sum+= nums[i];
            cumulative_sum.push_back(sum);
        }
        
        vector<int> ans(m,0);
        for(int i=0; i< m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(cumulative_sum[j]<=queries[i]) ans[i]=j+1;
                else break;
            }
        }
        return ans;        
    }
};