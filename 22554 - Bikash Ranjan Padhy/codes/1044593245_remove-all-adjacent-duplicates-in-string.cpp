class Solution {
public:
    string removeDuplicates(string s) 
    {
        if(s.size()==1)return s;

        stack<char> st;
        string ans;

        int n= s.size();
        ans.push_back(s[0]);

        // cout<< "ans: "<<ans<<endl;
        for(int i=1; i<n; i++)
        {
            // cout<< "i: "<<i<<", ans: "<<ans<<endl;
            if(!ans.empty() && s[i]== ans.back()) 
                    ans.pop_back(); 
            else
                ans.push_back(s[i]);
        } 
        return ans;
    }
};