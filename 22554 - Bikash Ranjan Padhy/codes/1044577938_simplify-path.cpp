class Solution {
private:
    void display_stack(stack<string> st2)
    {
        stack<string> stack= st2;
        while (!stack.empty()) 
        {
            cout << stack.top() <<", ";
            stack.pop();
        }
    }
public:
    string simplifyPath(string path) 
    {
        if(size(path)==1 && path[0]=='/')return path;
        stack<string> st;
        string ans;

        for(int i=0; i< path.size(); i++)
        {
            if(path[i]=='/' ) continue; 

            string tmp;
            while(i< path.size() && path[i]!= '/')
                tmp+= path[i++];
            
            if(tmp==".")continue; 

            if(tmp=="..")
            {
                if(!st.empty()) st.pop();
            }
            
            else st.push(tmp);
        }

        while(!st.empty())
        {
            ans= "/" + st.top() + ans;
            st.pop();
        }
        if(ans.size()==0) return "/";

        return ans;
        
    }
};