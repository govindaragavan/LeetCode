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
    string smallestFromLeaf(TreeNode* root) {
       string s="";
       vector<string> rtf;
       helper(root,s,rtf);
       for(string s : rtf)
       cout<<s<<" ";
       sort(rtf.begin(),rtf.end());
       return rtf[0];
    }
    private:
    void helper(TreeNode* root,string s,vector<string>& rtf){
        if(!root) return ;
        char ch = 'a' + root->val;
     s+=ch;
    if(!root->right && !root->left){
    reverse(s.begin(),s.end());
        rtf.push_back(s); return ;}
    helper(root->left,s,rtf);
    helper(root->right,s,rtf);
    }
};