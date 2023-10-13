class Solution {
public:
   vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size(),col=mat[0].size();
        
        if( (row*col) != (r*c) ) return mat;
       
        vector<vector<int>> res(r);
        for(int i=0;i<r;i++) res[i].resize(c);
        int x=0,y=0;
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j)
                if(y<c){
                    res[x][y]=mat[i][j];
                    y++;
                }
                else{
                    y=0,x++,j--;
                }        
        }
        return res;
    }
};