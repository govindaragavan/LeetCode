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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<vector<int>> rtf;
        helper(root,{},rtf);
        int count=0;
        for(auto q : rtf){
         if(pseudopalindrome(q)) count++;
        }
        return count;
    }
    private:
    void helper(TreeNode*root,vector<int> temp,vector<vector<int>>& rtf){
     if(!root) return;
     temp.push_back(root->val);
     if(!root->left && !root->right){
         rtf.push_back(temp); 
        return;}
     helper(root->left,temp,rtf);
     helper(root->right,temp,rtf);
    }
    bool pseudopalindrome(vector<int> a){
        unordered_map<int ,int> mp;
        for(int x : a)
        mp[x]++;
        int odd=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        if(it->second%2!=0) odd++;

        if(odd<=1) return 1;
        return 0;
        
    }
};