class Solution {
private:
    vector<vector<int>> ans;
    int n;
    void backtrack(int first, vector<int> curr, vector<int>& nums, int& len)
    {
        if(curr.size()== len)
        {
            ans.push_back(curr);
            return;
        } 

        for(int i= first; i< n; i++)
        {
            curr.push_back(nums[i]);
            backtrack(i+1, curr, nums, len);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        n= nums.size();
        vector<int> curr;

        for(int len= 0; len<=n; len++)
            backtrack(0, curr, nums, len);

        return ans;
    }
};