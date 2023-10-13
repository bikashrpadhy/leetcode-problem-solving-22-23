class Solution {
public:
    char repeatedCharacter(string s) 
    {
        if(s.size()==2) return s[0];
        
        unordered_map<char, int> freq;
        for(int i=0; i<s.size(); i++)
        {
            if(freq.find(s[i])== freq.end())
            freq[s[i]]++;            
            else 
                return s[i];
        }
        return 0;
    }
};