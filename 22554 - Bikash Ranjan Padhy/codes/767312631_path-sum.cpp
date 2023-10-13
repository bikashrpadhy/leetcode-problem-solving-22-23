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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return false;
        stack<pair<TreeNode*,int>> stack;
        stack.push({root, root->val});
        while(!stack.empty()) {
            TreeNode* current = stack.top().first; 
            int total_sum = stack.top().second; stack.pop();
            if(current->right) stack.push({current->right, total_sum+current->right->val});
            if(current->left) stack.push({current->left, total_sum+current->left->val});
            if(!current->right && !current->left && total_sum==sum) { //if its a leaf
                return true; //and total sum is found
            }
        }
        return false;
    }
};