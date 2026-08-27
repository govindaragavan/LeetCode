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
    int maxPathSum(TreeNode* root) {
       int Max=INT_MIN;
       maxpath(root,Max);
       return Max; 
    }
    private: 
    int maxpath(TreeNode* root,int &Max){
        if(!root) return 0;
        int leftsum=max(0,maxpath(root->left,Max));
        int rightsum=max(0,maxpath(root->right,Max));
        Max=max(Max,leftsum+rightsum+root->val);
        return root->val +max(leftsum,rightsum);
    }
};