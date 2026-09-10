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
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        solve(root,count);
        return count;
    }
    private:
    pair<int,int> solve(TreeNode* root,int& count){
        if(!root) return {0,0};
       
        auto [leftsum,leftcount] =solve(root->left,count);
        auto [rightsum,rightcount]=solve(root->right,count);
        int subtreesum=leftsum+rightsum+root->val;
        int subtreecount=leftcount+rightcount+1;
        if(subtreesum/subtreecount==root->val) count++;

        return {subtreesum,subtreecount};
    }
};