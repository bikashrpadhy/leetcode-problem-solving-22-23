class Solution {
private:
    bool checkpal(string word)
    {
        int i=0;
        while(i<word.size()/2)
            {if(word[i]!= word[word.size()-1-i]) return false;
            i++;}
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for(int i=0; i<words.size(); i++) 
            if(checkpal(words[i])) return words[i];

        return "";       
    }
};