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
    bool isBalanced(TreeNode* root) {
        int ans=1;
        return fun(root,ans)!=-1;
    }
    private: 
    int fun(TreeNode* root,int & ans){
        if(!root) return 0;

        int lh=fun(root->left,ans);
        if(lh==-1) return -1;
        int rh=fun(root->right,ans);
         if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
         return 1 + max(lh,rh);

    }
};