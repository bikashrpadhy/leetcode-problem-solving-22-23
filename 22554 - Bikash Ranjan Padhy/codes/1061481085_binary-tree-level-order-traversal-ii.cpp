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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            int breadth= qu.size();
            vector<int> tmp;
            for(int _=0; _ < breadth; _++)
            {
                TreeNode* curr= qu.front(); qu.pop();
                tmp.push_back(curr->val); 

                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            ans.insert(ans.begin(), tmp);
        }
        return ans;
    }
};











