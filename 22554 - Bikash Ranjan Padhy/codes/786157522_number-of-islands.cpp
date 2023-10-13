class Solution {
public:
     void dfs(vector<vector<char>>& a, int i, int j) {
        int m = a.size(), n = a[0].size();
        
        if(i < 0 || j < 0 || i == m || j == n) return;
        if(a[i][j] == '0') return;
        
        a[i][j] = '0';
        
        dfs(a, i - 1, j);
        dfs(a, i, j - 1);
        dfs(a, i + 1, j);
        dfs(a, i, j + 1);
    }
    
    int numIslands(vector<vector<char>>& a) {
        int m = a.size(), n = a[0].size(), count = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] == '0') continue;
                count++;
                dfs(a, i, j);
            }
        }
        return count;
    }
};