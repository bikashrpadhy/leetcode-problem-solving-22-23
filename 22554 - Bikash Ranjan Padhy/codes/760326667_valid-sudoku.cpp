class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<unordered_set<char>>> vs = vector<vector<unordered_set<char>>>(3,vector<unordered_set<char>>(3,unordered_set<char>()));        
        for(int i = 0; i<9;i++) {
            unordered_set<char> sr, sc;            
            for(int j = 0; j<9;j++) {
                char cij=board[i][j], cji=board[j][i];
                if(!chk(cij,vs[i/3][j/3])||!chk(cji,sc)||!chk(cij,sr)) return false;
            }
        }
        return true;
    }
    bool chk(char c, unordered_set<char>& s) {
        if(c < '0' || c>'9' ) return true;
        if(s.find(c) != s.end()) return false;
        s.insert(c);
        return true;
    }
};