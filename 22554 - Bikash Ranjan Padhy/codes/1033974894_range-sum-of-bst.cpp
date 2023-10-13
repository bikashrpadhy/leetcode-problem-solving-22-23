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
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        stack<TreeNode*> st;
        TreeNode *node;
        st.push(root);
        int sum=0;
        while(!st.empty())
        {
            node= st.top(); st.pop();
            if(node)
            {
                if(low<= node->val && node->val <= high)
                sum+= node->val;
                if(high> node->val)st.push(node->right);
                if(low< node->val) st.push(node->left);            
            }
        }
        return sum;        
    }
};