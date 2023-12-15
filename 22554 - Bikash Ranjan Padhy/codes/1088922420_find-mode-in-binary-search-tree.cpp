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
    vector<int> ans;
    unordered_map<int, int> mp;
    bool mode= false;
    void inorder(TreeNode *node)
    {
        if(!node) return;
        if(node->left) inorder(node->left);
        
        mp[node->val]++;
        ans.push_back(node->val);
        if(mp[node->val]>1) mode= true;

        if(node->right) inorder(node->right);
    }
public:
    vector<int> findMode(TreeNode* root) 
    {
        if(!root->left && !root->right) 
        {
            ans.push_back(root->val);
            return ans;
        }
        // mode= false;
        inorder(root);
        if(!mode) // all numbers in input are distinct
            return ans;
        
        // not distinct
        ans.clear();
        int mxfreq=1, maxnum;

        // find max freq
        for(auto &[key, value]: mp)
            mxfreq= max(mxfreq, value);

        //push all numbers with maxfreq into ans
        for(auto elm: mp)
            if(elm.second== mxfreq)
                ans.push_back(elm.first);

        return ans;
    }
};