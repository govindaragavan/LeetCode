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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
    private:
   void helper(TreeNode* root,string s,vector<string>& arr){
    if(!root) return;

    if(!root->left && !root->right){
        s+=to_string(root->val);
        arr.push_back(s);
        return;
    }
    s+=to_string(root->val) + "->";


    helper(root->left,s,arr);
    helper(root->right,s,arr);
   }
};