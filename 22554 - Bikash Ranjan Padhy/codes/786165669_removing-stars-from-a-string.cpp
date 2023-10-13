class Solution {
public:
    string removeStars(string s) 
    {
        vector<char> chars;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='*')
            {
                //i--;
                if(!chars.empty())
                {
                    chars.pop_back();
                }
            }
            else chars.push_back(s[i]);
        }
        
        string str(chars.begin(), chars.end());
        return str;
        
    }
};