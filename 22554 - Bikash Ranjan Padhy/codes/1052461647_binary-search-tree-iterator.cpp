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
    vector<int> vec;
    int i=0;
    void inorder(TreeNode*root)
    {
        if(!root)return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
public:

    BSTIterator(TreeNode* root) 
    {
        inorder(root);
        // for(auto h: vec)cout<<h<<", ";
        // cout<<endl;
        // cout<<vec.size()<<endl;
    }
    
    int next() 
    {
        // int j=i;
        // i++;
        return vec[i++]; 
    }
    
    bool hasNext() 
    {
        return i!= vec.size();        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */