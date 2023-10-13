class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         int i=0,k=0, len= nums.size();
//         for(i; i<len; i++)
//         {
            
//         }
        
        auto ip =   unique(nums.begin() ,nums.begin()+nums.size());
        //Resizing the array    
        nums.resize(std::distance(nums.begin(), ip));

        return nums.size();
    }
};