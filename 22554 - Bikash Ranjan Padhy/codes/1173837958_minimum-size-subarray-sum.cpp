class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        // 2- pointers approach
        // j= idx of the most recent number that was added; right
        // i= idx of the most recent number that can be removed; left
        int s=0;
        s=accumulate(nums.begin(), nums.end(), s);
        // cout<<s;
        if(s<target)return 0;

        int i=0, j=0, minsize=INT_MAX, cursum=0;

        while(j<nums.size())
        {
            cursum+= nums[j];
            while(cursum>=target)
            {
                cursum-= nums[i];
                minsize= min(minsize, j-i+1);
                i++;
            }
            j++;
        }
        return minsize==INT_MAX? 0: minsize;
        
    }
};