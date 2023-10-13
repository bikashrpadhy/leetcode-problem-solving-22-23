class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        if(nums.size()==1 ) return nums[0]==1? 0:1;
        int n= nums.size();
        vector<bool> present(n, false);
        
        // for(auto it: present)cout<<it<<", "; cout<<endl;

        for(int i=0; i< n; i++)
        {
            present[nums[i]]= true;
        }
        // cout<< "after:"<<endl;
        // for(auto it: present)cout<<it<<", "; cout<<endl;

        for(int i=0; i< n; i++)
        {
            if(!present[i]) return i;
        }
        return n;        
    }
};