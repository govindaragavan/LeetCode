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
        vector<TreeNode*> set1;
        vector<TreeNode*> set2;

        solve(p,root,{},set1);
        solve(q,root,{},set2);
  for(TreeNode* x : set1) cout<<x->val<<" ";
  cout<<endl;
    for(TreeNode* x : set2) cout<<x->val<<" ";
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
    void solve(TreeNode* p,TreeNode* root,vector<TreeNode*> curr,vector<TreeNode*> &set){
        if(!root) return;
        curr.push_back(root);
        if(root==p){set=curr; return;}
        solve(p,root->left,curr,set);
        solve(p,root->right,curr,set);
    }
};