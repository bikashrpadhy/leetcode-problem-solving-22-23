class Solution {
public:
    string reverseVowels(string s) 
    {
        if(s.size() == 1) return s;
        string vow;

        for(int i=0;i<s.size();i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'|| s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
            { vow+= s[i]; s[i] = '#';}
        
        reverse(vow.begin(), vow.end());

        cout<<vow<<endl;

        int j=0; 
        for(int i=0; i< s.size() && j<vow.size() ; i++)
            if(s[i]=='#') 
                {s[i]= vow[j++];}

        return s;
        
    }
};