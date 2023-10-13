class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0, curr = 0;
        
        int r = grid.size(), c = grid[0].size();

        vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j] == 1)
                {
                    q.push({i,j});
                    grid[i][j] = 0;
                    while(!q.empty())
                    {
                        pair<int, int> temp = q.front();
                        int i = temp.first;
                        int j = temp.second;
                        
                        q.pop();
                        curr++;
						// Traverse all four direction
                        for(auto x:dir)
                        {
                            int ii = i+x[0];
                            int jj = x[1]+j;

                            if(ii>=0 && ii<r && jj>=0 
                               && jj<c && grid[ii][jj] == 1)
                            {
                                q.push({ii,jj});
                                grid[ii][jj] = 0;
                            }
                        }                        
                    }
                }
                ans = max(ans,curr);
                curr=0;
            }
        }
        return ans;
    }
};