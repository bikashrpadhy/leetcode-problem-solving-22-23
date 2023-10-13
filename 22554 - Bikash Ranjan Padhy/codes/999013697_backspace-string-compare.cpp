class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string temp("");
        for(auto c : s)
        {
            if(c=='#' && temp.size()!=0)
            {
                temp.pop_back();
            }
            if(c!='#')temp.push_back(c);           
        }
        string temp2("");
        for(auto c : t)
        {
            if(c=='#' && temp2.size()!=0)
            {
                temp2.pop_back();
            }
            if(c!='#')temp2.push_back(c);            
        }
        return temp==temp2;        
    }
};