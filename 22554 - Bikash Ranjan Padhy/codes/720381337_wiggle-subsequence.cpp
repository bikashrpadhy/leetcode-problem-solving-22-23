class Solution {
public:
           int wiggleMaxLength(vector<int>& nums) {
        int mi = 1,ma = 1;
        int n = nums.size();
        for(int i = 0; i < n-1; ++ i){
            if(nums[i]>nums[i+1]){
                ma = mi+1;
            }else if(nums[i]<nums[i+1]){
                mi = ma+1;
            }
        }
        return max(mi,ma);
    }
        
    
};