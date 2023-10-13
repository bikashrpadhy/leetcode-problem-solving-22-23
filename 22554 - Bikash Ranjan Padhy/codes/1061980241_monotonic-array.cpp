class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        bool monoinc= true, monodec= true;
        
        int n= nums.size(), prev= nums[0];
        for(int i=1; i< n; i++)
        {
            if(prev> nums[i]) monoinc= false;
            else if(prev< nums[i]) monodec= false;            
            
            if(!monoinc && !monodec) return false;
            prev= nums[i];
        }        
        return monoinc || monodec;
    }

};