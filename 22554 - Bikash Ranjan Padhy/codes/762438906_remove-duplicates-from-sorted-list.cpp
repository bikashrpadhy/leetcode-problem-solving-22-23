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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL || head->next==NULL )return head;
        
        ListNode *p1=head, *p2=head, *tmp;
        while(p1!=NULL)
        {
            while(p2->next!= NULL && p1->val== p2->next->val)
                p2=p2->next;
            // p2->val == p1->val  is true
            
            p1->next= p2->next;
            p1= p1->next;
        }
        return head;
            
        
    }
};