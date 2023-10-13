class Solution {
public:
    string decodeString(string s) 
    {
        if(s.size()==1)return s; 
        stack<char> st;

        for(char c: s)
        {
            if(c!=']') {st.push(c); continue;} 
            else
            {
            // ']' was seen. Go back to find the string within [] and the number
                string tmp;
                while(!st.empty() && st.top()!='[')
                {
                    tmp=  st.top() + tmp;
                    st.pop();
                }
                st.pop(); // pop the [
                
                // get k
                int mult= 1, k=1;
                while(!st.empty() && isdigit(st.top()))
                {
                    k+= (st.top()-'0')*mult;
                    mult*=10;
                    st.pop();
                }
                // push to the stack, k times, string tmp, character by character
                while(--k)
                    for(char ch:  tmp)
                        st.push(ch);
            }
        }
        string ans;
        while(!st.empty())
        {
            ans= st.top() + ans;
            st.pop();
        }
        return ans;
    }
};