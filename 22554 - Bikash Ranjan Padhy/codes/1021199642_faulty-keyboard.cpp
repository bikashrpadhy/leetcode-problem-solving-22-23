class Solution {
public:
    string finalString(string s) 
    {
        string ans="";
        if(s.size()==1) return s;

        for(int i=0; i< s.size(); i++)
        {
            if(s[i]=='i') reverse(ans.begin(), ans.end());
            else ans.push_back(s[i]);
        }
        return ans;
    }
};