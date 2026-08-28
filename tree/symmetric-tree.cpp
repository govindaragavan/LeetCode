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
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        bool ans=helper(root->left,root->right);
        return ans;
    }
    private: 
    bool helper(TreeNode* lsub,TreeNode* rsub){
        if(lsub==NULL && rsub==NULL) return lsub==rsub;
                if (lsub == NULL || rsub == NULL)
            return false;

        if( lsub->val!=rsub->val) return false;
        return (helper(lsub->left,rsub->right) && helper(lsub->right,rsub->left));
    }
};