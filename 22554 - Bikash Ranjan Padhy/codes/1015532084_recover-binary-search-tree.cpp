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
    TreeNode* firstElement = NULL;
    TreeNode* secondElement = NULL;
    TreeNode* prevElement = NULL;

    void traverse(TreeNode* root) 
    {
       if (root == NULL) return;
            
        traverse(root->left);
        if(prevElement)
        {
        if (firstElement == NULL && prevElement->val >= root->val) 
        {
            firstElement = prevElement;
            // cout<< "firstElement: " << firstElement->val<< endl;
        }
        if (firstElement != NULL && prevElement->val >= root->val) 
        {
            secondElement = root;
            // cout<< "secondElement: " << secondElement->val<< endl;
        }
        }
        prevElement = root;
        // cout<< "prev: " << prevElement->val <<endl;

        traverse(root->right);
    }    


    void recoverTree(TreeNode* root) 
    {
        // In order traversal to find the two elements
        traverse(root);
        
        // Swap the values of the two nodes
        int temp = firstElement->val;
        firstElement->val = secondElement->val;
        secondElement->val = temp;
    }

};