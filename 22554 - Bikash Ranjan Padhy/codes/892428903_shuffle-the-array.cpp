class Solution {
public:
vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i=0,j=nums.size()/2;i<nums.size()/2,j<nums.size();i++,j++) {
            res.push_back(nums[i]);
            res.push_back(nums[j]);

        }
        return res;
    }
};
