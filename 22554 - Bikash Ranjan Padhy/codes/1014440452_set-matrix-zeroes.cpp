class Solution {
public:    
    void setZeroes(vector<vector<int>>& matrix) 
    {
        // unordered_map<int,int> mp;
        set<int> zjs;
        set<int> zis;

        for(int i=0; i< matrix.size(); i++)
            for(int j=0; j< matrix[0].size(); j++)
                if(matrix[i][j]==0){ zis.insert(i); zjs.insert(j); }
        
        for(auto zi :zis)
            for(int d=0; d< matrix[0].size(); d++) matrix[zi][d]=0;
        
        for(auto zj :zjs)
            for(int d=0; d< matrix.size(); d++) matrix[d][zj]=0;
        
    }
};