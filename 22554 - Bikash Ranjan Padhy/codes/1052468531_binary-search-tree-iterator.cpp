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
class BSTIterator {
private:
    stack<TreeNode*> st;
    void dfs(TreeNode*root)
    {
        if(!root)return;
        st.push(root);
        dfs(root->left);
    }
public:

    BSTIterator(TreeNode* root) 
    {
        dfs(root);
    }
    
    int next() 
    {
        if(st.empty())return -1;
        TreeNode* t= st.top(); st.pop();
        dfs(t->right);
        return t->val; 
    }
    
    bool hasNext() 
    {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */