class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        if(nums.size()==2) return (nums[0]-1)*(nums[1]-1);

        // find the max
        int max1=INT_MIN, idx1, max2=INT_MIN;
        for(int i=0;i< nums.size(); i++)
        {
            if(nums[i]>max1)
            {
                max1= nums[i];
                idx1= i;
            }
        }
        // find second max
        for(int i=0;i< nums.size(); i++)
        {
            if(nums[i]>max2 && i!=idx1)
            {
                max2= nums[i];
            }
        }
        return (max1-1)*(max2-1);
    }
};