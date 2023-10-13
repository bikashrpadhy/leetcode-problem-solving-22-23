class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(int i=0; i<magazine.size(); i++)
        {
            mp[magazine[i]]++;
        }
        
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(mp.find(ransomNote[i])!=mp.end() && mp.find(ransomNote[i])->second!=0)
            {
                mp.find(ransomNote[i])->second--;                
            }
            else return false;
        }
        return true;
    }
};