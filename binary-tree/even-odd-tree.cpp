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
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int l=0;
        while(!q.empty()){
      int n = q.size();
      int prev=l%2==0? -1 : INT_MAX;
      for(int i=0;i<n;i++){
        TreeNode* node = q.front();
        q.pop();
        if(l%2==0) {
            if(node->val%2==0 || prev>=node->val)
             return false;
             }
        else{ 
            if (node->val%2!=0 || prev<=node->val)
             return false;
             }
        prev=node->val;
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
      }
      l++;
        }
        return true;
    }
};