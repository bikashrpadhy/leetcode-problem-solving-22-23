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
     ListNode* deleteMiddle(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        ListNode* temp=s;
        bool cheak=false; // to make temp point to the prev node of s
        if(head==NULL||head->next==NULL)
        {
            return NULL;
            
        }
        while(f!=NULL&&f->next!=NULL)
        {
            s=s->next;
            if(!cheak)
            {
                cheak=true;
            }
            else
            {
                temp=temp->next;
            }
            f=f->next->next;
        }
        if(s->next==NULL)
        {
            temp->next=NULL;
        }
        else
        {
            temp->next=temp->next->next;
        }
        return head;
     }
};