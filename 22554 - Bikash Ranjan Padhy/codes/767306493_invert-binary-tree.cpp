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
    
    void invert(TreeNode* root)
    {
        if(!root) return;
        TreeNode* temp;
        if(root->left)
        {
            temp=root->left;
            root->left= root->right;
            root->right= temp;
            invert(root->left);
            invert(root->right);
        }
        else if(root->right) // root->left is NULL
        {
            root->left= root->right;
            root->right= NULL;
            invert(root->left);
        }
        else // left and right both are NULL
            return;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(!root|| (!root->left && !root->right)) return root;
        invert(root);       
        return root;
        
        
    }
};