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
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        if(!l1) return l2;
        if(!l2) return l1;

        //choose a head
        ListNode *head, *t;
        if(l1->val< l2->val)
        {
            head= l1; 
            t= l1;
            l1= l1->next;
        }
        else
        {
            head= l2; 
            t= l2;
            l2= l2->next;
        }
        // merge them
        while( l1 && l2)
        {
            if(l1->val< l2->val)
            {
                t->next= l1;
                l1= l1->next;
            }
            else
            {
                t->next= l2;
                l2= l2->next;
            }
            t=t->next;
        }
        while(l1)
        {
            t->next= l1;
            l1=l1->next;
            t=t->next;
        }
        while(l2)
        {
            t->next= l2;
            l2=l2->next;
            t=t->next;
        }
        t->next= NULL;
        return head;

    }

    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(!lists.size()) return NULL;
        ListNode* ans= lists[0];
        for(int i=1; i< lists.size(); i++)
        {
            ans= merge(ans, lists[i]);
        }
        return ans;
    }
};