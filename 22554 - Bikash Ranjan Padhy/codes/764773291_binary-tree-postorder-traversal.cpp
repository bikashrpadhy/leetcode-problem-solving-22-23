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
private:
    void Pre(vector <int>& b, TreeNode* root)
    {
        if(root)
        {
            
            Pre(b, root->left);
            Pre(b,root->right);
            b.push_back(root->val);
        }
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> v;
        
        Pre(v,root);
        return v;
    }
};