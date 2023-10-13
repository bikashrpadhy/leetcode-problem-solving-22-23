class Solution {
public:
    void dfs(int curr, vector<int>& vis, vector<vector<int>>& rooms) {
        vis[curr] = 1;
        for(auto i : rooms[curr]) {
            if(!vis[i]) dfs(i, vis, rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n);
        dfs(0, vis, rooms);
        for(int i=0;i<n;i++) {
            if(!vis[i]) return false;
        }
        return true;
    }
};