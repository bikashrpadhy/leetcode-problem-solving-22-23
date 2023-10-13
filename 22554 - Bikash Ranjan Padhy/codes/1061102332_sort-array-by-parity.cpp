class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> ans;
        for(int elm: nums )
            if((elm & 1)==0)//bitwise and
                ans.push_back(elm);
        
        for(int elm: nums )
            if((elm & 1)!=0)//bitwise and
                ans.push_back(elm);
        return ans;
    }
};