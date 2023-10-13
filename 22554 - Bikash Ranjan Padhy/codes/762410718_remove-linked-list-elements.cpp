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
    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head!=NULL && head->val==val) head= head->next; 
        if(head==NULL) return head;
        
        ListNode* itr, *temp;
        for(itr=head ; itr!=NULL && itr->next!=NULL ; )
        {            
            if(itr->next->val== val)
                itr->next=itr->next->next;
            else
                itr=itr->next;
                
                
        }
        return head;
    }
};