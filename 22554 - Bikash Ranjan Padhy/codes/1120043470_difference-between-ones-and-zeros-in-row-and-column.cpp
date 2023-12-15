class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int m= grid.size(), n= grid[0].size();
        //boundary case
        if(m==1 && n==1)
            if(grid[0][0]==0)return {{-2}};
            else return {{2}};

        //we make 4 id vectors to store the required counts        
        vector<int> onesrow(m,0), onescol(n,0);
        vector<int> zerosrow(m,0), zeroscol(n,0);

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]) onesrow[i]++, onescol[j]++;
                else zerosrow[i]++, zeroscol[j]++;

        vector<vector<int>> diff(m, vector<int>(n,0));

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
              diff[i][j]= onesrow[i]+onescol[j]-zerosrow[i]-zeroscol[j];
        return diff;

    }
};