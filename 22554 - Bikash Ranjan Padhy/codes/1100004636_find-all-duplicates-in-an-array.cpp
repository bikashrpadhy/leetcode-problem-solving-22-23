class Solution {
private:
    int n;
    vector<int> ans;
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        this->n = nums.size();
        // for(int i=0;i<n; i++)
        // {
        //     if(nums[abs(nums[i])-1]>0) 
        //         nums[abs(nums[i])-1]*= -1;
        // }
        sort(nums.begin(), nums.end());

        // for(auto elm: nums) cout<<elm<<", ";
        // cout<<endl;
        for(int i=1;i<n; i++)
            if(nums[i]== nums[i-1]) ans.push_back(nums[i]);
        
        return ans;
    }
};