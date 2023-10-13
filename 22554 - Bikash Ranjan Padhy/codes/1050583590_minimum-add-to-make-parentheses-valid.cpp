class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int alone=0;
        stack<char> st;

        for(char c: s)
        {
            if(c=='(') st.push(c);
            else 
            {
                if(st.empty()) alone++;
                else // its a closing brace
                st.pop();
            }
        }
        alone+= st.size();
        return alone;
    }
};