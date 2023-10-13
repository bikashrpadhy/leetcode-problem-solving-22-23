class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inters) 
    {
        vector<vector<int>> ans;
        sort(inters.begin(), inters.end());

        for(auto inter: inters)
        {
            if(ans.empty() || inter[0]> ans.back()[1])// no overlap
                ans.push_back(inter);
            else // there's an overlap
                ans.back()[1]= max(inter[1], ans.back()[1]);
        }
        return ans;        
    }
};