class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n= nums.size(), k=0;
        vector<int> neg(n/2 +1), ans;
        for(int m: nums)
            if(m<0) neg[k++]=m;
        
        // for(int m: neg)cout<<m<<", ";
        k=0;
        for(int i=0; i<n; i++)
            if(nums[i]>0)
            {
                ans.push_back(nums[i]);
                ans.push_back(neg[k++]);
            }        
        return ans;
    }
};