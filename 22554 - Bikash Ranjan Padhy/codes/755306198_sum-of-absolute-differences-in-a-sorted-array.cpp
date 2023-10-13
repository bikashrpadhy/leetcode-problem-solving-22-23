class Solution {
public:
   vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        vector<int> ans;
        for(int i=1;i<n;i++){
            sum += (nums[i]-nums[0]);
        }
        ans.push_back(sum);
        int prev = sum;
        for(int i=1;i<n;i++){
            prev = prev + (2*i-n)*(nums[i]-nums[i-1]);
            ans.push_back(prev);
        }
        return ans;
    }
};