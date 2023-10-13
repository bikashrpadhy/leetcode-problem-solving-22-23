class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        //Boyer Moore
        vector<int> ans;
        int z,y,cz=0,cy=0;
        // find y and z- candidates for maj element
        for(const auto &n: nums)
        {
            if(n==y) cy++;
            else if(n==z) cz++;
            
            else if(!cy) y=n, cy=1;
            else if(!cz) z=n, cz=1;

            else cy--, cz--;
        }
        // find the frequencies of y and z
        cy=0; cz=0;
        for(const auto &n: nums)
        {
            if(n==y)cy++;
            else if(n==z) cz++;
        }
        if(cy> nums.size()/3) ans.push_back(y);
        if(cz> nums.size()/3) ans.push_back(z);

        return ans;
    }
};