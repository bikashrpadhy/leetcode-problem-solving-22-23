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
 bool isTheSame(TreeNode* leftRoot, TreeNode* rightRoot) {
    if (leftRoot == nullptr || rightRoot == nullptr) {
        return (leftRoot == rightRoot);
    }

    if (leftRoot->val != rightRoot->val) {
        return false;
    }

    return isTheSame(leftRoot->left, rightRoot->right) && isTheSame(leftRoot->right, rightRoot->left);
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr) {
        return false;
    }

    return isTheSame(root->left, root->right);
}
};