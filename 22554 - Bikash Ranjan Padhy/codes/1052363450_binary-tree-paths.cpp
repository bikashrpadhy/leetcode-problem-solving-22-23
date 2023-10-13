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
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        //We uze a zdack vor DFS draversal
        stack<pair<TreeNode*, string>> st;
        st.push({root, ""});
        string currpath;

        vector<string> ans;
        while(!st.empty())
        {
            TreeNode *curr= st.top().first;
            currpath= st.top().second;
            st.pop();
            
            currpath= currpath+ to_string(curr->val);

            // check for children
            if(curr->right) st.push({curr->right, currpath+"->"});
            if(curr->left) st.push({curr->left, currpath+"->"});

            //leaf alert!
            if(!curr->left && !curr->right)
                ans.push_back(currpath);
        }
        return ans;
    }
};