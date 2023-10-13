/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        // BFS
        queue<pair<TreeNode*, TreeNode*>> qu;
        qu.push({original, cloned});

        while(!qu.empty())
        {
            pair<TreeNode*, TreeNode*> p= qu.front(); qu.pop();
            if(p.first== target) return p.second;

            if(p.first->left) qu.push({p.first->left, p.second->left });
            if(p.first->right) qu.push({p.first->right, p.second->right });
        }
        return NULL;
    }
};