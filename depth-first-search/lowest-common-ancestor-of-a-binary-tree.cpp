class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;

        solve(root, p, path1);
        solve(root, q, path2);

        int i = 0;

        while (i < path1.size() && i < path2.size() &&
               path1[i] == path2[i]) {
            i++;
        }

        return path1[i - 1];
    }

    bool solve(TreeNode* root, TreeNode* target,
               vector<TreeNode*>& path) {

        if (!root)
            return false;

        path.push_back(root);

        if (root == target)
            return true;

        if (solve(root->left, target, path))
            return true;

        if (solve(root->right, target, path))
            return true;
        path.pop_back();

        return false;
    }
};