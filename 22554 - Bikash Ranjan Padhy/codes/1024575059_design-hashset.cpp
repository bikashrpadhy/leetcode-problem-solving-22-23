class MyHashSet {
public:
    ListNode* head=NULL;
    MyHashSet() {}
    
    void add(int key) 
    {
        if(this->contains(key)) return;
        // cout<< "adding a node to the list: "<<key<<endl;
        ListNode*tmp= new ListNode(key);
        tmp->next= head;
        head= tmp;
        return;
    }
    
    void remove(int key) 
    {
        if(!this->contains(key)){
            //cout<< "didnt find key"<<endl;
         return;}

        if(head->val== key){head= head->next; return; }

        ListNode *t=head, *prev=head;

        while(t)
        {
            if(t->val!= key) 
            {
                prev= t;
                t=t->next;
            }
            else //found the key
            {
                prev->next= t->next;
                return;
            }
        }
        return;        
    }
    
    bool contains(int key) 
    {
        if(!head) return false;
        ListNode* t= head;

        while(t)
        {
            // cout<<t->val<<", ";
            if(t->val== key){ /*cout<<endl;*/ return true;}
            t= t->next;
        }
        // cout<<endl;
        return false;
    }    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */