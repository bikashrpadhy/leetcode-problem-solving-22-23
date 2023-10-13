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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head || !head->next)return head;
        if(!head->next->next && k%2==0)return head;
        if(!head->next->next && k%2!=0)
        {
            ListNode*t=head->next;
            head->next->next=head;
            head->next=NULL;
            t->next = head;
            return t;
        }

        if(k==0)return head;
        int n=1;
        ListNode* t1= head->next, *t2=head;
        while(t1) t2=t2->next, t1= t1-> next, n++;
        // cout<<t2->val;
        k= k%n; t1=head;
        while(t1->next!=t2)  t1= t1-> next;
        // cout<<t1->val;
        //rotate
        for(int i=0; i<k; i++)
        {
            t2->next= head;
            head= t2;
            t1->next= NULL;
            //one rotation over; reposistion t1 and t2;
            t1=head; t2=head->next;
            while(t2->next) t2=t2->next, t1= t1-> next;
        }
        return head;        
    }
};