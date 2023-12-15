class Solution {
public:
    int rearrangeCharacters(string s, string target) 
    {
        vector<int> alphacnt(26, 0);
        for(auto ch: s)
        {
            int idx= ch- 'a';
            alphacnt[idx]++;
        }

        for(int cnt=0; true; cnt++)
        {
            for(char ch: target)
            {
                int idx= ch-'a';
                alphacnt[idx]--;
                if(alphacnt[idx]<0) return cnt;
            }
        }
        return 1;
    }
};