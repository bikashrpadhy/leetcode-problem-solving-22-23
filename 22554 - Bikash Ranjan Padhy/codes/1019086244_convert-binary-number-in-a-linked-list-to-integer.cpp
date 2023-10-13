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
    int getDecimalValue(ListNode* head) 
    {
        ListNode*t=head;
        int sum=0, poww=0;
        while(t) poww++, t=t->next;
        t=head; poww--;
        while(t )
        {
            if(t->val) sum+=pow(2, poww);            
            cout<<"sum= "<<sum<<endl;
            poww--;
            t=t->next;
        }
        return sum;
    }
};