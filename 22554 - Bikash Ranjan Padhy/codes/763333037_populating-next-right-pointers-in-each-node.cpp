/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        Node* p = root;
        while(p) {
            Node* q = p;
            while(q and q->left) {
                q->left->next = q->right;
                q->right->next = (q->next ? q->next->left : NULL);
                q = q->next;
            }
            p = p->left;
        }
        return root;
}
};