class Solution {
public:
    int search(vector<int>& nums, int target) 
        {
         // int n = sizeof(nums)/sizeof(int);
        if(nums.size()==1) return (nums[0]==target?0:-1);
        
        int l=0, r=nums.size()-1;
        int mid= l+(r-l)/2;
        while(l<r)
        {
            if(nums[mid]==target) return mid;
            
            if(nums[mid]<target) l=mid+1;
            
            else r=mid;
            
            mid= l+(r-l)/2;            
        }
        if(nums[l]==target) return l;
        return -1;
    }
        
    
};