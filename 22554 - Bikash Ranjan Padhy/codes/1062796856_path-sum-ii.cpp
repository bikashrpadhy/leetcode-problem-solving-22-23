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
    vector<vector<int>> ans;
    int target;

public:
    void help(TreeNode* node, int currsum, vector<int> currpath )
    {
        if(!node) return;
        currsum+= node->val;
        currpath.push_back(node->val);

        if(!node->left && !node->right)
        {
            if(currsum== target) ans.push_back(currpath);
            return;
        }

        if(node->left) help(node->left, currsum, currpath);
        if(node->right) help(node->right, currsum, currpath);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        
        if(!root) return ans;
        target= targetSum;
        vector<int> tmp; 
        help(root, 0, tmp);
        return ans;
    }
};