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
    int maxAncestorDiff(TreeNode* root) {
        int Min=INT_MAX;
        int Max=INT_MIN;
        int ans=INT_MIN;
        solve(root,Min,Max,ans);
        return ans;
    }
    void solve(TreeNode* root,int Min,int Max,int & ans){
        if(!root) return;
         Min=min(root->val,Min);
         Max=max(root->val,Max);
         ans=max(ans,abs(Min-Max));
         solve(root->left,Min,Max,ans);
         solve(root->right,Min,Max,ans);
    }
};