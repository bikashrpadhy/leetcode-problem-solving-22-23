class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<int, int> mp;
        vector<char> done;
        int i,j;
        for(i=0, j=0; i< s.size() && j<t.size(); i++, j++)
        {
            auto it= find(done.begin(), done.end(), t[i]);
            if(mp.find(s[i])==mp.end() && it==done.end()) 
            {
                mp[s[i]]= t[i];
                done.push_back(t[i]);
            }

            else 
            {
                if(mp[s[i]]!= t[i]) 
                    return false;
            }
        }
        return true;
    }
};