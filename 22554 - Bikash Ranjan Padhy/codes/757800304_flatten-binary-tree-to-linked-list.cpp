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
    void flatten(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        
        stack<TreeNode*> stk;
        stk.push(root);
        TreeNode* cur;
        
//         while(root!= NULL)
//         {
//             if(root->right!=NULL) stk.Push(root->right);
            
//             root->right= root->left;
            
//             root=root->right;
//         }
        while(!stk.empty())
        {
            cur= stk.top();
            stk.pop();
            
            if(cur->right) stk.push(cur->right);
            
            if(cur->left) stk.push(cur->left);
            
            if(!stk.empty()) cur->right=stk.top();
            
            cur->left= nullptr;            
        }
    }
};