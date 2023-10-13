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
        if(!head || !head->next) return head;
        bool rep_head= false;
        
        while(head && head->next && head->val==head->next->val)
        {
            while(head->next && head->val==head->next->val)
                head= head->next,rep_head= true; 

            if(rep_head) head= head->next;  
        }

        ListNode *t1=head, *t2=head, *t1prev= head;
        while(t2 )
        {
            while(t2 && t1->val== t2->val) t2= t2->next;
            // if(!t2) break;
            if(t1->next== t2)
            {
                t1prev= t1;
                t1=t1->next;
                t2= t2==NULL? NULL: t2->next;                
            }
            else//repetition
            {
                t1prev->next= t2; 
                t1= t2;
            }
        }
        return head;
    }
};