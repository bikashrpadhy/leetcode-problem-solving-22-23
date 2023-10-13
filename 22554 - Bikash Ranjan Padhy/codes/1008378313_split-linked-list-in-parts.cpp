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
    vector<ListNode*> splitListToParts(ListNode* root, int k) 
    {
        ListNode*cur= root;
        int N = 0;
        while (cur ) {
            cur = cur->next;
            N++;
        }

        int width = N / k, rem = N % k;

        vector<ListNode*> ans;
        cur = root;
        for (int i = 0; i < k; ++i) 
        {
            ListNode* head = cur;
            for (int j = 0; j < width + (i < rem ? 1 : 0) - 1; ++j) {
                if (cur) cur = cur->next;
            }
            if (cur ) {
                ListNode* prev = cur;
                cur = cur->next;
                prev->next = NULL;
            }
            ans.push_back( head);
        }
        return ans;
    }
};