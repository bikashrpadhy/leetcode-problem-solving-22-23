class Solution {
public:

    int longestPalindrome(string s) {
        map<char,int> mp;

        for (auto &&i : s)
        {
            mp[i]++;
        }

        int odd=0, even=0;
        
        for (auto &&i : mp)
        {
            even+=i.second/2;
            odd+=i.second%2;
        }

        if(odd>0)return 2*even+1;

        return 2*even; 
        
        
    }
};