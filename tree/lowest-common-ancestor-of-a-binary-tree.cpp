/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<vector<TreeNode*>> ans;

        solve(p,root,ans,{});
        solve(q,root,ans,{});
                vector<TreeNode*> set1=ans[0];
        vector<TreeNode*> set2=ans[1];
        int n=set1.size();
        int m=set2.size();
        int i=0;
        TreeNode* node;
        while(i<n && i<m){
            if(set1[i]!=set2[i]) break; 
           i++;            
        }
        return set1[i-1];
    }
    void solve(TreeNode* p,TreeNode* root,vector<vector<TreeNode*>>& ans,vector<TreeNode*> curr){
        if(!root) return;
        curr.push_back(root);
        if(root==p) {ans.push_back(curr); return ;}
        solve(p,root->left,ans,curr);
        solve(p,root->right,ans,curr);
    }
};