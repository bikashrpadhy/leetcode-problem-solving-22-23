/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) 
    {
        stack<pair<TreeNode*, int>> st;
        st.push({root, 0});
        int currsum, ans=0;


        while(!st.empty())
        {
            TreeNode *curr= st.top().first;
            currsum= st.top().second;
            st.pop();

            currsum= currsum+ curr->val;

            //check for children
            if(curr->left)st.push({curr->left, currsum*10});
            if(curr->right)st.push({curr->right, currsum*10});

            //check for leaf
            if(!curr->left && !curr->right)
            {
                ans+= currsum;
            }
        }
        return ans;
    }
};