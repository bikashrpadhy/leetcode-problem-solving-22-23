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
    ListNode* doubleIt(ListNode* ghead) 
    {
        if(!ghead ) return ghead;
        // if(!ghead->next){ghead->val= ghead->val<<1; return ghead;}

        stack<int> st;
        ListNode *t=ghead;
        while(t)
        {
            st.push(t->val);
            // cout<<"pushed: "<<t->val<<endl;
            t=t->next;
        }
        int val=0, carry=0;
        ListNode *head=NULL;
        while(!st.empty())
        {
            val= carry + (st.top()<<1);
            carry= val/10;
            val= val%10;
            // cout<< "val: "<<val<<endl;
            // cout<< "carry: "<<carry<<endl;

            ListNode *tmp= new ListNode(val, head);
            head= tmp;
            st.pop();
        }
        if(carry)
        {
            ListNode *tmp= new ListNode(carry, head);
            return tmp;
        }
        return head;
    }
};