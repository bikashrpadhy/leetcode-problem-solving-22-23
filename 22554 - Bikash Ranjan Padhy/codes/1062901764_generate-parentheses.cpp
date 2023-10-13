class Solution {
private:
    // vector<string> ans;
    void recPara(vector<string> & ans, string curr, int n, int m)
    {
        if(n==0 && m==0)
        {
            ans.push_back(curr);
            return;
        }
        if(n>0)recPara(ans, curr+"(", n-1, m+1);
        if(m>0) recPara(ans, curr+")",n ,m-1);
    }
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        if(n==1) return vector<string>{"()"};
        recPara(ans,"", n, 0);
        return ans;
    }
};