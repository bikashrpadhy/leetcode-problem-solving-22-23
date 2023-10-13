class Solution {
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int i=0, j=0;
        int n= s.size(), m= t.size();

        while( i<n && j<m && s[i]== t[j]){i++;j++;}
        return t[j];

    }
    // OLD SOlutION- problem - duplicates in s("a") and t("aa") both
    // char findTheDifference(string s, string t) 
    // {
    //     unordered_set<char> mp1;
    //     unordered_set<char> mp2;

    //     for(auto c: s)
    //     {
    //         mp1.insert(c);
    //     }
    //     for(auto c: t)
    //     {
    //         mp2.insert(c);
    //     }
    //     for(char elm: mp2)
    //     {
    //         if(mp1.find(elm)==mp1.end()) // not found
    //         return elm;
    //     }
    //     return 'n';
    // }
    

};