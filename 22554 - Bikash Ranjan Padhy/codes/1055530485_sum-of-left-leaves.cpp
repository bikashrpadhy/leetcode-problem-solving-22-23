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
    int sum=0;
    void sumleft(TreeNode* root, bool isleft)
    {
        if(!root)return;
        if(!root->left && !root->right && isleft)
        {
            sum+= root->val;
            return;
        }
        sumleft(root->left, true);
        sumleft(root->right, false);

    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(!root->left && !root->right) return 0;
        sumleft(root, false);
        return sum;
    }
};