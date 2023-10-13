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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int la=0, lb=0;
        ListNode *t= headA;
        while(t) la++, t=t->next;

        t=headB;
        while(t) lb++, t=t->next;

        map<ListNode*, int> mp;
        t= la<lb? headA: headB;

        for(int i=0; t ; i++)
            {mp[t]=i;t=t->next;}

        t= lb>la? headB: headA; 
        while(t)
        {
            if(mp.find(t)!= mp.end()) //found it in the map
            return t;
            t= t->next;
        }
        return NULL;
        
    }
};