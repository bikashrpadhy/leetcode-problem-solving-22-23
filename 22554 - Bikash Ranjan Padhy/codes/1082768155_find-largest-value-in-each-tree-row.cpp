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
    vector<int> largestValues(TreeNode* root) 
    {
        vector<int> ans;
        if(!root) return ans;

        queue<TreeNode*> qu;
        qu.push(root);

        while(!qu.empty())
        {
            int breadth= qu.size(), max= INT_MIN;
            for(int _=0;  _< breadth;  _++)
            {
                TreeNode* curr= qu.front(); qu.pop();
                max= curr->val> max? curr->val: max;

                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            ans.push_back(max);
        }
        return ans;
    }
};