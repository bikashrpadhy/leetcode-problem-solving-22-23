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
        if(head->next == NULL) return NULL;
        
        if(head->next->next== NULL) 
        {
            head->next=NULL;
            return head;
        }
        
        int cnt=0;
        ListNode *p1=head, *p2=head;
        while(p2->next!=NULL) 
        {
            cnt++;
            p2=p2->next;
        }
        
        cnt-=2;//To make p1 point to the previous node of the middle node
        while(cnt>0)
        {
            p1=p1->next;
            cnt-=2;
        }
        
        //deleting procedure
        // p2=p1->next->next;
        
        p1->next= p1->next->next;
        return head;
    }
};