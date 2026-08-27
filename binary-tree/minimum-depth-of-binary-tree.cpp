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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
       if(isLeaf(root)) return 1;
        int l=root->left==NULL?  INT_MAX: minDepth(root->left);
        int r=root->right==NULL?  INT_MAX: minDepth(root->right);
        return 1+ min(l,r);
    }
    private: 
    bool isLeaf(TreeNode* node){
    if  (node->left==NULL && node->right==NULL)  return true;
    return false;
    }
};