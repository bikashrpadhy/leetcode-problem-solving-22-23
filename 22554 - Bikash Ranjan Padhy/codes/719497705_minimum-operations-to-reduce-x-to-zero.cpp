class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
  {
        //int s = accumulate(nums.begin(), nums.end(), 0); 
        int k = accumulate(nums.begin(), nums.end(), 0)- x;                                   
        int m = INT_MIN;                                 
        int n = nums.size();                             
        int curr_sum = 0;                                
        int i = 0,j;                                       
        for (j = 0; j < n; j++)                      
        {
            curr_sum += nums[j];
            while (i <= j && curr_sum > k)
            {
                curr_sum -= nums[i];
                i++;
            }
            if (curr_sum == k)
            {
                m = max(m, j - i + 1);
            }
        }
        return (m == INT_MIN) ? -1 : n - m;
    }
};