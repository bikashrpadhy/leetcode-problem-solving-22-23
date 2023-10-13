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
    vector<int> v;
    void inorder(TreeNode* t)
    {
        if(!t) return ;

        inorder(t->left);

        if( !t->left && !t->right) v.push_back(t->val);

        inorder(t->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        if(!root1 || !root2) return root1== root2;

        inorder(root1);
        vector<int> v1=v;
        v.clear();

        inorder(root2);
        vector<int> v2=v; 

        return v1==v2;        
    }
};