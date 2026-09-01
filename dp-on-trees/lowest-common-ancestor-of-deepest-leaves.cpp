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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        vector<vector<TreeNode*>> ans;
        solve(root,{},ans);
       
       for(auto p : ans){
        for(TreeNode* x : p) cout<<x->val<<" ";
        cout<<endl;
               }

        return root;
    }
    void solve(TreeNode* root,vector<TreeNode*> path,vector<vector<TreeNode*>>& ans){
        if(!root) return false;

        path.push_back(root);

        if(!root->left && !root->left){
            ans.push_back(path);
            return true;
        }
        if(solve(root->left,path,ans)) return true;
        if(solve(root->right,path,ans)) return true;

        path.pop_back();
        return false;
    }
};