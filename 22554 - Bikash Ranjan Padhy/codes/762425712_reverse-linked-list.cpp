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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)return head;
        
        ListNode *front=head->next, *curr=head, *temp, *newhead;
        
        while(front->next!=NULL)
        {
            temp= front->next;
            front->next=curr;
            curr= front;
            front= temp;
        }
        newhead=front;
        newhead->next= curr;
        head->next=NULL;
        return newhead;
    }
};