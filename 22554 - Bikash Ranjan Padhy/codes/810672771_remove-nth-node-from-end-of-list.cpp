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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode* ptr1=head, *ptr2=head;
        int totalNodes=0;
        while(ptr1!=NULL) 
        {
            ptr1=ptr1->next;
            totalNodes++;
        }
        if(totalNodes==n)
        {
            head=head->next;
            return head;
        }
        
        ptr2=head->next;
        ptr1=head;
        
        while(ptr2!=NULL && totalNodes-n>1 )
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            totalNodes--;            
        }
        ptr1->next=ptr2->next; 
        return head;
        
        
    }
};