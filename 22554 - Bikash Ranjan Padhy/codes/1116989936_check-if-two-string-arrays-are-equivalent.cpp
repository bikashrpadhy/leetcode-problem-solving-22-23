class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1, str2;
        for(auto str: word1)
        {
            str1+= str;
        }
        for(auto str: word2)
        {
            str2+= str;
        }
        return str1==str2;
    }
};