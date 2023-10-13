/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public: 
    int maxDepth(Node* root) 
    {
        if(!root) return 0;
        queue<Node*> qu;
        qu.push(root);
        int depth= 0;
        while(!qu.empty())
        {
            depth++;
            int breadth= qu.size();
            for(int _=0; _< breadth; ++_)
            {
                Node *node= qu.front(); qu.pop();
                for(Node* child: node->children)
                    if(child) qu.push(child);
            }
        }
        return depth;
    }
};





















