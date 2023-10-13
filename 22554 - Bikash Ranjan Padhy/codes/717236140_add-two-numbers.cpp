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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *sum = new ListNode(0), *cur =sum;
        for(int carry=0; l1|| l2 || carry>0 ; cur= cur->next , carry/=10)
        {
            if(l1) carry += l1->val, l1=l1->next;
            if(l2) carry += l2->val, l2=l2->next;
            cur->next= new ListNode(carry%10);
        }
        return sum->next;     
    }
};