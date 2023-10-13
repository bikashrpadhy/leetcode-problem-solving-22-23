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
    TreeNode* invertTree(TreeNode* root) 
    {
      if(!root) return root;
      queue<TreeNode*> qu;
      qu.push(root);

      while(!qu.empty())
      {
        TreeNode *curr = qu.front(); qu.pop();
        TreeNode *right = curr->right; //? curr->right: NULL;
        curr->right = curr->left;
        curr->left = right;
        

        if(curr->left) qu.push(curr->left);
        if(curr->right) qu.push(curr->right);

      }
      return root;
        
    }
};