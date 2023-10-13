class Solution 
{
private:
    vector<vector<int>> ans;
    vector<int> currcomb;
    int currsum,n;
    void backtrack(vector<int>& cands, int &target, int curridx)
    {
        if(currsum> target) return;
        if(currsum== target)
        {
            ans.push_back(currcomb);
            return;
        }
        for(int i=curridx; i<n; i++)
        {
            currsum+= cands[i];
            currcomb.push_back(cands[i]);
            backtrack(cands, target, i);
            //backtrack
            currsum-= cands[i];
            currcomb.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        currsum=0; 
        n= candidates.size();
        backtrack(candidates, target, 0);
        return ans;
    }
};