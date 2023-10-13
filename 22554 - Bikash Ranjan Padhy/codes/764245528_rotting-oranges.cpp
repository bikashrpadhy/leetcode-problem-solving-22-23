class Solution {
public:
int orangesRotting(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>>q;
        int fresh = 0;
        int time = 0;
        vector<vector<int>>rotten(rows, vector<int>(cols, 0));
        vector<pair<int, int>>directions = {{0,1},{1,0},{-1,0},{0,-1}};
        
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(grid[i][j] == 1){
                    fresh++;
                }
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        if(fresh == 0){
            return 0;
        }
        
        while(q.size() != 0 && fresh > 0){  
            int size = q.size();
            for(int i = 0; i < size; ++i){            
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int j = 0; j < directions.size(); ++j){
                    int r = row + directions[j].first;
                    int c = col + directions[j].second;
                    if(r < 0 || c < 0 || r >= rows | c >= cols || grid[r][c] != 1){
                        continue;
                    }
                    grid[r][c] = 2;
                    q.push({r,c});
                    fresh--;
                }
            }
            time++;
        }
        
        if(fresh > 0){
            return -1;
        }
        
        return time;
        
    }
};