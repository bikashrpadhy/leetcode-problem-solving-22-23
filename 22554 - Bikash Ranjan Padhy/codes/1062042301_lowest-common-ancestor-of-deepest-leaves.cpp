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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *first, *last;
        while(!q.empty()) {
            first = q.front(); last = q.back();
            int sz = q.size();
            while(sz--) {
                auto node = q.front(); q.pop();
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
        }
        // cout<< "root->val: " << root->val<<endl;
        // cout<< "first->val: " << first->val<<endl;
        // cout<< "last->val: " << last->val<<endl;
        return lca(root, first, last);
    }
    
    TreeNode* lca(TreeNode *root, TreeNode *p, TreeNode *q) {
        if(!root || root == p || root == q) return root;
        auto left = lca(root -> left, p, q);
        auto right = lca(root -> right, p, q);
        // if left is not null, 
        // evaluate the subsequent expression (right?root:left) 
        // else return right.
        return left ? right ? root : left : right;
        // it returns root if l && r both aint null
    }
};