class Solution {
private:
    vector<vector<int>> ans;
    int target;
    void dfs(vector<vector<int>>&graph, vector<int>& currpath, int curri)
    {
        // if(maxj==0)
        if(currpath.back()== target)
        {
            // for(auto el: currpath) cout<<el<<", ";
            // cout<<endl;
            
            ans.push_back(currpath);
            return;
        }
        for(auto vertex: graph[curri])
        {
            currpath.push_back(vertex);
            dfs(graph, currpath, vertex);
            currpath.pop_back();
        }

    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        target= graph.size()-1;
        vector<int> currpath;
        currpath.push_back(0);
        dfs(graph, currpath, 0);
        return ans;
    }
};