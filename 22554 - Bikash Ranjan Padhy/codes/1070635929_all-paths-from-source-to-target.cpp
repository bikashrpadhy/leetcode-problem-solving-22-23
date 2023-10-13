class Solution {
private:
    vector<vector<int>> ans;
    int target;
    void backtrack(vector<vector<int>>&graph, vector<int>& currpath, int curri, int currj, int maxj)
    {
        // if(maxj==0)
        if(currpath.back()== target)
        {
            for(auto el: currpath) cout<<el<<", ";
            cout<<endl;
            
            ans.push_back(currpath);
            return;
        }
        for(int j= currj; j< maxj; j++)
        {
            currpath.push_back(graph[curri][j]);
            int newi= graph[curri][j];
            backtrack(graph, currpath, newi, 0, graph[newi].size());
            currpath.pop_back();
        }

    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        // for(int i=0; i< graph.size(); i++)
        {
            target= graph.size()-1;
            int maxj= graph[0].size();
            vector<int> currpath;
            currpath.push_back(0);
            backtrack(graph, currpath, 0, 0, maxj);
        }
        return ans;
    }
};