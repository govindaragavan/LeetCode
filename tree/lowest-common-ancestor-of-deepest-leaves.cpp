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
int height=depth(root);
        solve(root,{},ans,0,height);
        TreeNode* lca = ans[0][0];

        for (int i = 0; i < ans[0].size(); i++) {

            bool same = true;

            for (int j = 1; j < ans.size(); j++) {
                if (ans[j][i] != ans[0][i]) {
                    same = false;
                    break;
                }
            }

            if (same)
                lca = ans[0][i];
            else
                break;
        }

        return lca;
    }
    void solve(TreeNode* root,vector<TreeNode*> path,vector<vector<TreeNode*>>& ans,int l,int h){
        if(!root) return ;

        path.push_back(root);

        if(!root->left && !root->right && l==h-1){
            ans.push_back(path);
            return ;
        }
        solve(root->left,path,ans,l+1,h);
        solve(root->right,path,ans,l+1,h);
    }
    int depth(TreeNode* root){
        if(!root) return 0;;

        int lh= depth(root->left);
        int rh=depth(root->right);

        return 1 + max(lh,rh);
    }
};