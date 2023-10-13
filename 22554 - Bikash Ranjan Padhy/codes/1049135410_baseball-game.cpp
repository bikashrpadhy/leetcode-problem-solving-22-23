class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        //if(ops.size()==1)return stoi(ops[0]);
        
        stack<int> st;        
        for(string str : ops)
        {
            if(str=="C")st.pop();
            
            else if(str=="+")
            {
                int num1= st.top(); st.pop();
                int num2= st.top(); st.pop();
                int res= num1+num2;
                
                st.push(num2);                
                st.push(num1);                
                st.push(res);   
                

            }
            else if(str=="D")
            {
                // cout<<"pushing: "<<2*st.top()<<endl;
                st.push(2*st.top());
            }
            else
            {// it's a number
                // cout<<"pushing: "<<stoi(str)<<endl;
                st.push(stoi(str));                
            }
        }
        
        int sum=0;
        while(!st.empty())
        {
            // cout<<st.top()<<endl;
            sum+= st.top(); st.pop();
        }
        return sum;
    }
};