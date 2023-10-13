class Solution {
public:
      vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int tsum= 0; 
        for(auto it : nums) tsum+=it; //calculating total sum
        int n = nums.size();
        int csum = 0; //this will strore cumulative sum to current index
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            csum += nums[i];
			
			int rsum = tsum-csum; //remaining sum
            ans[i] = (nums[i]*(i+1)-csum) + rsum-(nums[i]*(n-1-i));
        }
        return ans;
    }
};