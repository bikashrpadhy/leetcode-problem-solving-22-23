class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size()==1) return strs[0];
        string prefix= strs[0];

        for(int i=1; i< strs.size(); i++)
        {
            string s= strs[i];
            prefix= prefix.substr(0, min(prefix.size(), s.size()));
            for(int k=0; k<s.size() && k< prefix.size(); k++)
            {
                if(prefix[k]!=s[k])
                {
                    prefix= prefix.substr(0,k);
                    break;
                }
            }

        }
        return prefix;
    }
        
        
        
    
};