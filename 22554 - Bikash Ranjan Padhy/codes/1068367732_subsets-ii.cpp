class Solution {
private:
    vector<vector<int>> ans;
    vector<int> curr;
    int n;
    void subsetWithDup(vector<int>& nums, int begin)
    {
        ans.push_back(curr);
        for(int i=begin; i< n; i++)
        {
            if(i==begin || nums[i]!= nums[i-1])
            {
                curr.push_back(nums[i]);
                subsetWithDup(nums, i+1);

                //backtrack
                curr.pop_back();
            }
        }

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        n= nums.size();
        sort(nums.begin(), nums.end());
        subsetWithDup(nums, 0);
        return ans;
    }
};