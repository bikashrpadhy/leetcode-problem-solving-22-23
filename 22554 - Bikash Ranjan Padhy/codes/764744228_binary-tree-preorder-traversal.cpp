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
    vector<int> preorderTraversal(TreeNode* root)
    {
        // vector<int> result;
        // pt(result, root);
        // return result;
        
        vector<int> result;
        stack<TreeNode*> todo;
        todo.push(root);
        while (!todo.empty()) {
            auto top = todo.top();
            todo.pop();
            if (!top) continue;
            result.push_back(top->val);
            todo.push(top->right);
            todo.push(top->left);
            
        }
        
        return result;
    }
};