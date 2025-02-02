class Solution 
{
    void combination(vector<int>& candidates, int target, vector<int> currComb, int currSum, 
    int currIndex, vector<vector<int>>& ans)
    {
        if(currSum>target) return; //backtrack
        if(currSum==target)
        {
            ans.push_back(currComb); //store the solution and backtrack
            return;
        }
        
        for(int i=currIndex; i<candidates.size(); i++)
        {
            //try all possible options for the next level
            currComb.push_back(candidates[i]); //put 1 option into the combination
            currSum+=candidates[i];
            //try with this combination, whether it gives a solution or not.
            combination(candidates, target, currComb, currSum, i, ans); 
            //when this option backtrack to here, remove this and go on to the next option.
            currComb.pop_back();
            currSum-=candidates[i];
        }
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> currComb;
        combination(candidates, target, currComb, 0, 0, ans);
        return ans;
    }
};