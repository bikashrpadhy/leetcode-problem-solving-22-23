/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void reorderList(ListNode* head) 
    {
        if(!head || !head->next || !head->next->next)return;
        
        stack<ListNode*> st;
        ListNode*t= head; int size=0;
        while(t)
        {
            st.push(t);
            t=t->next;            
            size++;
        }
        t=head;
        for(int i=0; i< size/2; i++)
        {
            ListNode* curr= st.top(); st.pop();
            curr->next= t->next; 
            t->next= curr;
            t= curr->next;           
        }
        t->next= NULL;        
    }
};