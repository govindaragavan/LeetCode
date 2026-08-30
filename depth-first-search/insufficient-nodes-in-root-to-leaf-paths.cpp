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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if (root->left == root->right)
            return root->val < limit ? NULL : root;
        if (root->left)
            root->left = sufficientSubset(root->left, limit - root->val);
        if (root->right)
            root->right = sufficientSubset(root->right, limit - root->val);
        return root->left == root->right ? NULL : root;
    }
    private:
    void helper(TreeNode* root,int sum,vector<TreeNode*> neg,int limit){
        if(!root) return;
        if(root->val<0) neg.push_back(root);
        sum+=root->val;
        if(sum<limit && (!root->right && !root->left)){
           int n=neg.size();
           for(int i=0;i<n && sum<limit;i++){
            sum-=neg[i]->val;
            cout<<neg[i]->val<<" ";
            neg[i]=NULL;
           }
}

         helper(root->left,sum,neg,limit);
         helper(root->right,sum,neg,limit);

    }
    
};