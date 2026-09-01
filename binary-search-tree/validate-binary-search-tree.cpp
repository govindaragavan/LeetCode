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
    bool isValidBST(TreeNode* root) {
        int ans=1;
        solve(root,ans);
        return ans;
    }
    void solve(TreeNode* root,int &ans){
        if(!root->left && !root->right) return;
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        if(!(left->val<root->val) || !(right->val>root->val)) {ans=0; return;}
        solve(root->left,ans);
        solve(root->right,ans);
    }
};