class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        ios_base:: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        if(pref.size()==1) return pref;
        vector<int> ans;
        int n = pref.size(); //, cumxor=0;
        
        ans.push_back(pref[0]);
        for(int i=1; i< n; i++)
            ans.push_back(pref[i-1]^pref[i]);

        return ans;
    }
};