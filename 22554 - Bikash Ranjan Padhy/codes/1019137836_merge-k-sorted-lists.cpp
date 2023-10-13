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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int k= lists.size();
        if( !k ) return NULL;
        

        multimap<int, ListNode*> mp;

        for(int i=0; i< k; i++)
        {
            if(lists[i]!=NULL)
            for(ListNode* t=  lists[i]; t!= NULL ; t=t->next)
            {
                int val= t->val;
                mp.insert({val, t});
            }
        }
        if(!mp.size()) return NULL;

        auto it= mp.begin();
        ListNode *head= it->second;
        ListNode *prev= head;

        for( ; it!= mp.end(); ++it )
        {
            prev->next= it->second; 
            prev= it->second;
        }
        prev->next= NULL;

        return head;
        // testcase= [[],[1]] 
        // [[1]]
        
    }
};