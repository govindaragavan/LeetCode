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
    void flatten(TreeNode* root) {
        vector<TreeNode*> tree;
        solve(tree,root);
        int n=tree.size();
for(int i=1;i<n;i++){
tree[i-1]->right=tree[i];
tree[i-1]->left=NULL;
}   
 }
    void solve(vector<TreeNode*>&tree,TreeNode* root){
        if(!root) return;

        tree.push_back(root);
        solve(tree,root->left);
        solve(tree,root->right);
    }
};