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
    // int count=0;
    int countNodes(TreeNode* root) 
    {
        if(!root) return 0;

        int cl=0, cr=0;
        if(root->left) cl= countNodes(root->left);
        if(root->right) cr= countNodes(root->right);
        return 1+cl+cr;        
    }
};