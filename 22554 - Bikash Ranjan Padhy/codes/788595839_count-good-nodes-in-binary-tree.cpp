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
    int goodnodes_cnt=0;
        
    void dfs(TreeNode* node, int path_max)
    {
        if(!node)return;
        
        if(node->val >= path_max)
        {
            goodnodes_cnt++;
            path_max= node->val;
        }
        dfs(node->left, path_max);
        dfs(node->right, path_max);
            
        
    }
    int goodNodes(TreeNode* root) 
    {
        dfs(root, root->val);
        return goodnodes_cnt;        
    }
};