class Solution {
private:
    int ans= 0;
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        // construct alphacnt
        vector<int> alphacnt(26, 0);
        for(auto ch: chars)
        {
            int idx= ch- 'a';
            alphacnt[idx]++;
        }
        
        for(string word: words)
        {
            vector<int> tmpcnt= alphacnt;
            bool good= true;
            for(char ch : word)
            {
                int idx= ch-'a';
                tmpcnt[idx]--;
                if(tmpcnt[idx]<0) { good= false; break;}
            }
            if(good) ans+= word.size(); 
        }
        return ans;      
    }
};