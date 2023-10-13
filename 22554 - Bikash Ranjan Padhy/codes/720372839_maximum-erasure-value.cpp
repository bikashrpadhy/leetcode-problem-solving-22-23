class Solution {
public:
  int maximumUniqueSubarray(vector<int>& nums) 
{
    unordered_set<int> seen;
    int curr_sum=0,l =0, max_sum=0;
    for(int num : nums)
    {
        while(seen.find(num)!= seen.end())
        {
            curr_sum-= nums[l];
            seen.erase(nums[l]);  // why not num? why nums[l]?
            l++;
        }
        curr_sum+= num;
        seen.insert(num);
        max_sum= max(max_sum, curr_sum);
    }
    return max_sum;
}
};
  