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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        map<TreeNode*,pair<TreeNode*,int>> mp;
        queue<TreeNode*> q;
        q.push(root);
        int xl=0,yl=0,l=0;
        TreeNode* xp;
        TreeNode* yp=nu;
        while(!q.empty()){
            int n  =q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->val==x) {xl=mp[node].second; xp=mp[node].first;}
              else  if(node->val==y){ yl=mp[node].second; yp=mp[node].first;}
                if(node->left){ q.push(node->left);   mp[node->left]={node,l};}
                if(node->right){ q.push(node->right); mp[node->right]={node,l};}
            }l++;
        }
        
        return (xl==yl && xp!=yp);
    }
};