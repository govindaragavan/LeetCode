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
        if(!root) return;
        if(!root->left && !root->right) return;
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        if(left)
        if(!(left->val<root->val) )
        {ans=0; return;}
        if(right)
        if(!(right->val>root->val))
         {ans=0; return;}
        solve(root->left,ans);
        solve(root->right,ans);
    }
};