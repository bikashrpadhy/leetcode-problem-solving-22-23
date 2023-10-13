class Solution {
public:
    int countAsterisks(string s) 
    {
        if(s.size()==1) return s[0]=='*';
        
        int block=0, starCount=0;
        for(int i=0; i< s.size(); i++)
        {
            if(s[i]=='|') 
            {
                if(block>0) block--;
                else block++;
            }
            if(s[i]=='*')
            {
                if(block!=1) starCount++;
                else continue;
            }
        }
        return starCount;
        
    }
};