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
    int findMax(TreeNode* root,int &Max){
        if(!root) return 0;
       int l= findMax(root->left,Max);
      int r=  findMax(root->right,Max);
        Max=max(Max,l+r);
        return 1 + max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int Max=0;
        int ans=findMax(root,Max);

        return Max;
    }
};