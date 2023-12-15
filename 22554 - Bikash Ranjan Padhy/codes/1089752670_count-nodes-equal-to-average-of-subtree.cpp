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
    int count{0};
    pair<int, int> findavg(TreeNode* node)
    {
        if(!node)return {0, 0};

        pair<int, int> left = findavg(node->left);
        pair<int, int> right = findavg(node->right);

        int sum = left.first + right.first + node->val;
        int cnt = left.second + right.second + 1;

        if(sum/cnt == node->val)
            count++;
        
        return {sum, cnt};
    }
public:
    int averageOfSubtree(TreeNode* root) 
    {
        // if(!root->left && !root->right) 
        // {
        //     return root->val;
        // }
        findavg(root);
        return count;
    }
};