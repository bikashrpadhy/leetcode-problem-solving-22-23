class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        int match_count=0;
        unordered_map<char,int> mp;
        
        if(s.size()<t.size()) swap(s,t);
        for(auto ch: s)
        {
            mp[ch]++;
        }
        for(auto ch: t)
        {
            if(mp.find(ch)!=mp.end() && mp[ch])
            {
                match_count++;
                mp[ch]--;
            }
        }
        if(match_count== t.size()) return true;
        else return false;        
    }
};