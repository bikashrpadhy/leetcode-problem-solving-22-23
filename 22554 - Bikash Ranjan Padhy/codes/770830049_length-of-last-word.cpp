class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        if(s.size()==0 || s.size()==1) return s.size();
        
        int last_of_lword=s.size()-1;
        
        if(s[s.size()-1]==' ')
            for(last_of_lword=s.size()-1; last_of_lword>0; last_of_lword--)
            {
                if(s[last_of_lword]==' ') continue;
                else break;
            }
        cout<<"last_of_lword: "<< last_of_lword<< endl;
        if(last_of_lword==0) return 1;
        for(int i=last_of_lword; i>=0; i--)
        {
        
            if(s[i]==' ') return last_of_lword-i;
        }
        return last_of_lword+1;
                
    }
};