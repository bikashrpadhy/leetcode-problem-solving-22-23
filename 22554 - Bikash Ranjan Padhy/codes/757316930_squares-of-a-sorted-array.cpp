class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int x;
        vector <int> ans (nums.size());
        for( x = 0; x < nums.size() ; x++)
        {
            if(nums[x] >= 0) break; // Partioning element 
        }
        
        int i = x-1 , j = x, k =0; // Split into 2 parts
        
        while ( i >= 0 && j < nums.size())  // Merge 
        {
            if( -nums[i] < nums[j] )
                ans[k++] = nums[i]*nums[i--];
            else
                ans[k++] = nums[j]*nums[j++];
        }
        while(i >= 0)
            ans[k++] = nums[i]*nums[i--];
        
        while(j < nums.size())
            ans[k++] = nums[j]*nums[j++];
        
        return ans;
    }
};