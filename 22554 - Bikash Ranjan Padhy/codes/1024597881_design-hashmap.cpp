class MyHashMap {
public:
    vector<ListNode*> mp;
    MyHashMap(): mp(1000001, NULL) {}
    
    void put(int key, int value) 
    {
        ListNode *t= new ListNode(value);
        mp[key]= t;        
    }
    
    int get(int key) 
    {
        ListNode*t= mp[key];
        if(t)return t->val;        
        else return -1;
    }
    
    void remove(int key) 
    {
        mp[key]= NULL;        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */