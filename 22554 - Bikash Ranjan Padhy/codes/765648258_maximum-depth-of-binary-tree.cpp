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
    int deepest=0;
    int maxDepth(TreeNode* root, int depth = 1){
    if(!root)  return deepest;
    if(!root->left and !root->right){
        if(deepest < depth){
            deepest = depth;
        }
        return deepest;
   }
   maxDepth(root->left, depth+1);
   maxDepth(root->right, depth+1);
   return deepest;
}
};