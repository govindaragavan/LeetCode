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
    int maxLevelSum(TreeNode* root) {
                if(!root) return 0;
        vector<pair<int,int>>sums;
        int  l=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
           long long temp=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                temp+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }l++;
            sums.push_back({temp,l});
        }
        sort(sums.begin(),sums.end());
        int  ans=sums[sums.size()-1].second;
        return ans;
    }
};