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
    int depth(TreeNode* node, int depthh)
    {
        if(!node->left && !node->right)return 1;
        if(!node->left && node->right) return 1+depth(node->right,depthh);
        if(!node->right && node->left) return 1+depth(node->left,depthh);

        return 1+min(depth(node->left, depthh), depth(node->right, depthh));
    }


    int minDepth(TreeNode* root) 
    {
        if(!root)return 0;
        if(!root->left && !root->right)return 1;

        return depth(root,1);
        
    }
};