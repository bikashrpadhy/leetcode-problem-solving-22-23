class Solution {
private:
    int ans{0};
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int m= mat.size(), n= mat[0].size();

        if(m==1 && n==1) 
            if(mat[0][0]==1) return 1;
            else return 0;
        
        vector<int> row1s(m,0), col1s(n,0);
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(mat[i][j]) row1s[i]++, col1s[j]++;

        // cout<<"row1s: ";
        // for(int n: row1s) cout<<n<<", "; cout<<endl;
        // cout<<"col1s: ";
        // for(int n: col1s) cout<<n<<", "; cout<<endl;

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(mat[i][j]==1 && row1s[i]==1 && col1s[j]==1) ans++;
        return ans;        
    }
};