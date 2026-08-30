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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        unordered_map<TreeNode*,TreeNode*> mp;
        vector<pair<TreeNode*,int>> level;
        queue<pair<TreeNode*,int>> q;
        int l=0;
        q.push({root,-1});
        while(!q.empty()){
            int n=q.size();
            if(depth-2==l){
                    for(int i=0;i<n;i++){
                        auto p=q.front();
                        q.pop();
                        TreeNode* node=p.first;
                        if(node->left) {q.push({node->left,0}); mp[node->left]=node;}
                        if(node->right) {q.push({node->right,1}); mp[node->right]=node;}

                    }
                }
                        else  if(depth-1==l){
                    for(int i=0;i<n;i++){
                        auto p=q.front();
                        q.pop();
                        
                       level.push_back(p);
                    }
                    break;
                }
                else
            for(int i=0;i<n;i++){
                auto p=q.front();
                q.pop();
                TreeNode* node=p.first;
                if(root->left) q.push({root->left,0});
                if(root->right) q.push({root->right,1});
            }l++;
        }
        for(int i=0;i<level.size();i++){
            TreeNode* node=new TreeNode(val);
            int side=level[i].second;
            TreeNode* cur=level[i].first;
            if(side==1){ mp[cur]->right=node; node->right=cur;}
            if(side==0){ mp[cur]->left=node; node->left=cur;}
        }
        return root;
    }
};