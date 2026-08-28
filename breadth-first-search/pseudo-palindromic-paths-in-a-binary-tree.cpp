class Solution {
public:
    int pseudoPalindromicPaths(TreeNode* root) {
        unordered_map<int, int> mp;
        return helper(root, mp);
    }

private:
    int helper(TreeNode* root, unordered_map<int, int>& mp) {
        if (!root) return 0;

        mp[root->val]++;
        if (!root->left && !root->right) {
            int odd = 0;

            for (auto it : mp) {
                if (it.second % 2 != 0)
                    odd++;
            }

            mp[root->val]--;   

            return odd <= 1;
        }

        int ans = helper(root->left, mp)
                + helper(root->right, mp);

        mp[root->val]--;

        return ans;
    }
};