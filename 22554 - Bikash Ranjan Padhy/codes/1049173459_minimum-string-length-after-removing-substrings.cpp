class Solution {
public:
    int minLength(string s) 
    {
        if(s.size()==1)return 1;
        string st;

        for(char c:s)
        {
            if(!st.empty())
            {
                if(c=='D' && st.back()=='C') st.pop_back();

                else if(c=='B' && st.back()=='A')st.pop_back();

                else st.push_back(c); 
            }
            else st.push_back(c); 
        }
        return st.size();
    }
};