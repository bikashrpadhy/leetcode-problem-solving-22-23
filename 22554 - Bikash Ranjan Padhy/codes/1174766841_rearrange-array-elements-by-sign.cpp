class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // 2 pointers- 
        // pos = indices of the positive numbers in ans
        // neg = indices of the negative numbers in ans

        int n= nums.size(), neg=1, pos=0, m=0; 
        vector<int> ans(n,0);
        
        while(m<n)
        {
            if(nums[m]>0)
            {
                ans[pos]=nums[m];
                pos+=2;
            }
            else
            {
                ans[neg]=nums[m];
                neg+=2;
            }
            m++;
        }
        return ans;
    }
};