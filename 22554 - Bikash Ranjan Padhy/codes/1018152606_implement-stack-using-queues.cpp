class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() : q1{}{} 
    
    void print_queue(queue<int> q)
    {
        queue<int> temp = q;
        cout<< "queue: "<<endl;
        while (!temp.empty()) {
            cout << temp.front()<<" ";
            temp.pop();
        }
        cout << endl;
    }
    void push(int x) 
    {
        q1.push(x);
    }
    
    int pop() 
    {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int obj= q1.front();
        q1.pop();
        // q1 should be empty now
        // cout<< "q1 empty: "<<q1.empty()<<endl;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        // print_queue(q1);
        return obj;        
    }
    
    int top() 
    {
        return q1.back();
    }
    
    bool empty() 
    {
        return q1.size()==0;        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */