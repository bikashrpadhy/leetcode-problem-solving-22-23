class Solution {
public:
    int longestPalindrome(string s)
    {
        if(s.size()==1) return 1;

        unordered_map<char, int> freq;
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]]++;
        }

        int pal_size=0, single=0;
        for(auto pair: freq)
        {
            cout<<"char: " <<pair.first<< " freq: "<< pair.second<<endl;
            while(pair.second>1)
            {

                pal_size+=2;
                pair.second-=2;
            }

            if(pair.second==1) single++;
        }
        if(pal_size%2!=0) return pal_size;

        return single>0? pal_size+1: pal_size;
    }
};