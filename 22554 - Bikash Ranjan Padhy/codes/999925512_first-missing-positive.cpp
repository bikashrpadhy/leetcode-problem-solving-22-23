class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        //convert all negatives to n+1
        for (int i = 0; i < n; i++) if (nums[i] <= 0) nums[i] = n + 1;
        
        // for every |nums[i]|<n, 
        // go to the index |nums[i]| and make the value at that index neg.
        for (int i = 0; i < n; i++)
            if (abs(nums[i]) <= n && nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;

        // Now, nums contains negs at all indices that have first positives 

        // return the first index that contains the first positive value
        for (int i = 0; i < n; i++) if (nums[i] > 0) return i + 1;
        return n + 1;
    }
};