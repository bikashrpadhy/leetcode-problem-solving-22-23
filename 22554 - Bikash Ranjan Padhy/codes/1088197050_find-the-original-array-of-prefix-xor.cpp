class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        if(pref.size()==1) return pref;
        vector<int> ans;
        // ans.push_back(pref[0]);
        int n = pref.size(), cumxor=0;
        for(int i=0; i< n; i++)
        {
            cumxor= cumxor ^ pref[i];
            ans.push_back(cumxor);
            cumxor= pref[i];
        } 
        return ans;
    }
};