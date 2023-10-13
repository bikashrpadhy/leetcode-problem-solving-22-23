/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        ListNode *aage= node->next;
        node->val= aage->val; 
        node->next= aage->next;
        aage->next= NULL;
        delete(aage);        
    }
};