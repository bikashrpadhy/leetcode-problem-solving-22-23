class Solution {
private:
    unordered_map<int, vector<int>> mp;
    vector<int> ans;
    void dfs(int curr, int prev)
    {
        ans.push_back(curr);

        for(int next: mp[curr])
            if(next!= prev)
                dfs(next, curr);
    }
public:
    vector<int> restoreArray(vector<vector<int>>& pairs) 
    {
        if(pairs.size()==1) return pairs[0];

        for(auto &pair: pairs)
        {
            mp[pair[0]].push_back(pair[1]);
            mp[pair[1]].push_back(pair[0]);
        }
        //find root
        int root;
        for(auto &elm: mp)
            if(elm.second.size()==1) 
            {
                root= elm.first;
                break;
            }
        //call dfs recursively on root
        dfs(root, INT_MAX);
        return ans;
    }
};