class Solution {
private:
    bool checkpal(string word)
    {
        for(int i=0, j= word.size()-1; i<j; i++, j--)
            if(word[i]!= word[j]) return false;
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for(string word: words) 
            if(checkpal(word)) return word;

        return "";       
    }
};