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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans;
       helper(root,{},ans,targetSum,0); 
       return ans;
    }
    private:
    void helper(TreeNode* root,vector<int> temp,vector<vector<int>>& ans,int x,int sum){
        if(!root) return;
        temp.push_back(root->val);
         sum+=root->val;
        if(sum==x && (!root->right && !root->left)){
        ans.push_back(temp);
        return;
        }
        helper(root->left,temp,ans,x,sum);
        helper(root->right,temp,ans,x,sum);
    }
};