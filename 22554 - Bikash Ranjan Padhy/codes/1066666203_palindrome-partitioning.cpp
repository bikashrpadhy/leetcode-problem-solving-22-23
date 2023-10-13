class Solution {
private:
    vector<vector<string>> ans; 
    int n;
    bool is_palindrome(string &s, int start, int end)
    {
        while(start<end)
        {
            if(s[start++]!= s[end--]) return false;
        }
        return true;
    }
    void dfs(int start, vector<string>& curr, string &s)
    {
        if(start>= n) 
        {
            ans.push_back(curr);
            return;
        }
        for(int pos=start; pos< n; pos++)
        {
            if(is_palindrome(s,start, pos))
            {
                curr.push_back(s.substr(start, pos-start+1));
                dfs(pos+1, curr, s);

                curr.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) 
    {
        n= s.size();
        vector<string> curr;
        
        dfs(0, curr, s);
        return ans;
    }
};