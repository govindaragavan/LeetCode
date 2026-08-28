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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        long long ans=0;
        while(!q.empty()){
            int n=q.size();
            long long left=q.front().second;
            long long first=0,last=0;
            for(int i=0;i<n;i++){
                auto p=q.front();
                q.pop();
                TreeNode* node=p.first;
                long long index=p.second-left;

       if(i==0)    first=index;
       if(i==n-1)     last=index;
                if(i==n-1) ans=max(ans,index-left+1);
                if(node->left) q.push({node->left,2*index+1});
                if(node->right) q.push({node->right,2*index+2});
            }
            ans=max(last-first+1,ans);
        }
                    return ans;
    }
};