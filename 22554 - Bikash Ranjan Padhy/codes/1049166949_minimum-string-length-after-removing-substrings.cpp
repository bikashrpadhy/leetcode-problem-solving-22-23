class Solution {
public:
    int minLength(string s) 
    {
        if(s.size()==1)return 1;
        stack<char> st;

        st.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!= 'D' && s[i]!='B') {st.push(s[i]);continue;}
            
            else if(!st.empty())
            {// C or A is waiting to be pushed to the stack
                if(s[i]=='D' && st.top()=='C')
                {
                    st.pop();
                    continue;
                }
                else if(s[i]=='B' && st.top()=='A')
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]); 
            // push the D or B that didnt satisfy matching conditions
        }

        // int size= st.size();        
        // while(!st.empty())
        // {
        //     cout<<st.top()<<endl;
        //     st.pop();
        // }
        return st.size();
    }
};