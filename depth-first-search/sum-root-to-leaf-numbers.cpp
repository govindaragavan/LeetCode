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
    int sumNumbers(TreeNode* root) {

        vector<int> arr;
        helper(root,0,arr);
        int sum=reduce(arr.begin(),arr.end());
        return sum;
    }
    private:
    void helper(TreeNode* root,int num,vector<int>& arr){
        if(!root) return;

        num=num*10 + root->val;

        if(!root->right && !root->left){
        arr.push_back(num);
        return;}
        

         helper(root->left,num,arr);
         helper(root->right,num,arr);
    }
};