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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if( !l1 && !l2) return NULL;
        if(!l1) return l2;
        if(!l2) return l1;

        stack<int> st1, st2;
        while(l1)
        {
            st1.push(l1->val);
            l1= l1->next;
        }
        while(l2)
        {
            st2.push(l2->val);
            l2= l2->next;
        }

        int sum=0, carry=0;
        ListNode* head= NULL;

        while(!st1.empty() || !st2.empty())
        {
            sum= carry;
            if(!st1.empty())
            {
                sum+= st1.top();
                st1.pop();
            }
            if(!st2.empty())
            {
                sum+= st2.top();
                st2.pop();
            }

            ListNode* tmp= new ListNode(sum%10);
            tmp->next= head;
            head= tmp;
            carry= sum/10;
        }
        if(carry!=0) 
        {
            cout<< "carry: "<< carry<<endl;
            ListNode* tmp= new ListNode(carry);
            tmp->next= head;
            head= tmp;
        }
        return head;
    }
};