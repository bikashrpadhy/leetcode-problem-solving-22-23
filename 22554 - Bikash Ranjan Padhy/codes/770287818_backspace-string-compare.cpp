class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        if(s.size()==0 && t.size()==0) return true;
        
        if(s.size()==0 || t.size()==0) return false;
        
        stack<char> s_chars, t_chars;
        
        for(int i=0; i<s.size(); i++) 
        {
            if(s[i]!='#') s_chars.push(s[i]);
            else if(!s_chars.empty()) s_chars.pop();
        }
        
        for(int i=0; i<t.size(); i++) 
        {
            if(t[i]!='#') t_chars.push(t[i]);
            else if(!t_chars.empty()) t_chars.pop();
        }
        
        while(!s_chars.empty() && !t_chars.empty()) 
        {
            if(s_chars.top()!= t_chars.top())
                return false;
            s_chars.pop();  t_chars.pop();
        }
        
        return(s_chars.empty() && t_chars.empty());
    }
};