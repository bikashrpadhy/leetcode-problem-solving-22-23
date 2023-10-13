class Solution {
public:
//    int removeDuplicates(vector<int>& nums) {
//         int i=0,k=0, len= nums.size();
//         for(i; i<len; i++)
//         {
            
//         }
        
     int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int i =1;i<n;i++)
        {
        if(nums[i] == nums[i-1] || nums[i] ==nums[s])
        continue;
        else
        {
        swap(nums[i], nums[++s]);
        }

            }

            return s+1;
        }
};