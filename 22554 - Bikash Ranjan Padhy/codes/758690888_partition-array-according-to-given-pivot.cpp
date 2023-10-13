class Solution {
public:
       vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v1,v2,v3;
        for(int i=0;i<nums.size();i++)
          if(nums[i]<pivot)
              v1.push_back(nums[i]);
          else if(nums[i]==pivot)
              v3.push_back(nums[i]);
          else
              v2.push_back(nums[i]);
        for(int i=0;i<v3.size();i++)
            v1.push_back(v3[i]);
        for(int i=0;i<v2.size();i++)
            v1.push_back(v2[i]);
        return v1;
    }
  
};