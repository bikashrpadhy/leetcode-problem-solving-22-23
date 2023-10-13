class Solution {
private:
    int n;
    int backtrack(vector<int>& nums, int curr, int idx)
    {
        if(idx>= n) return curr;

        int with = backtrack(nums, curr ^ nums[idx], idx+1);

        int without = backtrack(nums, curr, idx+1);
        return with + without;
    }
public:
    int subsetXORSum(vector<int>& nums) 
    {
        // Backtracking
        n= nums.size();
        return backtrack(nums, 0, 0);        
    }
};