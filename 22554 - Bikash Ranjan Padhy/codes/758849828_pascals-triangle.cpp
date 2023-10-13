class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)return {{1}};
        
        vector<vector<int>> ans(numRows);
        
        for(int row=0; row<numRows; row++)
        {
            ans[row].resize(row+1);
            ans[row][0]=ans[row][row]=1; 
            
            for(int j=1; j<row; j++)
            {
                ans[row][j]= ans[row-1][j-1]+ ans[row-1][j];
            }
        }
         return ans;
    }
};