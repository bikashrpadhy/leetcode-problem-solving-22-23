class Solution {
private:
    int n, ans;
    void backtrack(vector<int>& nums, int curr, int idx)
    {
        if(idx>= n){ ans+= curr; return;}

        backtrack(nums, curr ^ nums[idx], idx+1);

        backtrack(nums, curr, idx+1);
        // return with + without;
    }
public:
    int subsetXORSum(vector<int>& nums) 
    {
        // Backtracking
        n= nums.size();
        ans= 0;
        backtrack(nums, 0, 0);        
        return ans;
    }
};