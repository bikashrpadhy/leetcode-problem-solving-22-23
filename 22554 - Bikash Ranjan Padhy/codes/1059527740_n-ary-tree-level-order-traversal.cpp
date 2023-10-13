/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {

        vector<vector<int>> ans;
        vector<int> tmp;
        if(!root) 
        {
            // tmp.push_back(NULL);
            // ans.push_back(tmp);
            return ans;
        }

        queue<Node*> qu;
        qu.push(root);
        tmp.push_back(root->val);
        ans.push_back(tmp);

        tmp.clear();
        
        while(!qu.empty())
        {
            int breadth= qu.size();
            for(int _=0; _ < breadth; _++)
            {
                Node *node= qu.front(); qu.pop();
                // vector<int> tmp(node->children);
                // ans.push_back(tmp);

                for(Node* child: node->children)
                    // if(child)
                    {
                        qu.push(child);
                        tmp.push_back(child->val);
                    }
            }
            if(!tmp.empty())ans.push_back(tmp);
            tmp.clear();
        }
        return ans;
    }
};