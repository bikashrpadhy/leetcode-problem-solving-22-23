class Solution {
public:
int orangesRotting(vector<vector<int>>& grid) {
        if (grid.size() == 0) return 0;
        
        // pair.first == row; pair.second = col
        queue<pair<int, int>> rottens;
        int m = grid.size(), n = grid[0].size(), fresh = 0, result = -1;
        
        //used for finding all 4 adjacent coordinates
        vector<int> dir={-1, 0, 1, 0, -1}; 
        
        // find all rottens and count the fresh oranges
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) rottens.push({i,j});
                else if (grid[i][j] == 1) fresh++;
            }
        }
        
        // BFS to scan each level of the graph
        while (!rottens.empty()) {
            int qsize = rottens.size();
            // cout << qsize << endl;
            
            // mark to rotten for current round (level)
            while (qsize--) {
                pair<int, int> top = rottens.front(); rottens.pop();
                
                // check the 4 directions of current point
                for (int i = 0; i < 4; ++i) {
                    int row = top.first + dir[i];
                    int col = top.second + dir[i+1];
                    
                    // change from fresh to rotten in 4 directions
                    if (row >=0 && row < m && col >= 0 && col < n && grid[row][col] == 1) {
                        grid[row][col] = 2;
                        rottens.push({row,col});
                        fresh--;
                    }
                }
            }
            result++;
        }
        // handle corner cases
        if (fresh > 0) return -1; // cannot rotten all the fresh ones
        if (result == -1) return 0; // no oranges
        return result;
    }
};