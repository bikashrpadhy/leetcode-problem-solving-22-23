class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // 2 pointers- 
        // pos points to index of the positive number
        // neg points to index of the negative number

        int n= nums.size(), neg=0, pos=0; 
        vector<int> ans;
        while(nums[pos]<0) pos++; // pos now points to first positive num
        while(nums[neg]>0) neg++; // neg now points to first negative num
        
        while(pos<n && neg<n)
        {
            ans.push_back(nums[pos++]);
            ans.push_back(nums[neg++]);

            while(pos<n && nums[pos]<0) pos++;
            while(neg<n && nums[neg]>0) neg++;
        }
        return ans;
    }
};