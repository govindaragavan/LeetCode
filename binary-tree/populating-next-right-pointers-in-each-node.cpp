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
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        vector<vector<Node*>> tree;
        while(!q.empty()){
            int n=q.size();
             vector<Node*> level;
            for(int i=0;i<n;i++){
            Node* node=q.front();
            q.pop();
            level.push_back(node);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            }
            tree.push_back(level);
        }
        for(auto q : tree){
            int n=q.size();
            if(n==1) q[0]->next=NULL;
            for(int i=1;i<n;i++){
                
                 q[i-1]->next=q[i];
            }
        }
        return root;
    }
};