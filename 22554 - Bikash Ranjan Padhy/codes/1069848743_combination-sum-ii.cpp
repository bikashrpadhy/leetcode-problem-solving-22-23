class Solution {
public:
    vector<vector<int>> result;
    int n;
    
    
    void comsum(vector<int> &curr, int& target, int sum, vector<int> &candidates, int curInd){
        if(target == sum){
            result.push_back(curr);
            return;
        }
        else if(sum>target){
            return;
        }
        
        for(int i = curInd; i < n; i++)
        {
            if(i != curInd && candidates[i]==candidates[i-1])               
                continue;
            sum += candidates[i];
            curr.push_back(candidates[i]);
            comsum(curr, target, sum, candidates, i+1);
            sum -= candidates[i];
            curr.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        n = candidates.size();
        sort(candidates.begin(), candidates.end());
        comsum(curr, target, 0, candidates, 0);
        return result;
    }
};