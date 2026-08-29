class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;

        unordered_map<TreeNode*, TreeNode*> parent;
        buildParent(root, nullptr, parent);

        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(target);
        visited.insert(target);

        int dist = 0;

        while (!q.empty()) {

            int size = q.size();

            if (dist == k) {
                while (size--) {
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                break;
            }

            while (size--) {
                TreeNode* node = q.front();
                q.pop();


                if (node->left && !visited.count(node->left)) {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                if (node->right && !visited.count(node->right)) {
                    visited.insert(node->right);
                    q.push(node->right);
                }

                if (parent[node] && !visited.count(parent[node])) {
                    visited.insert(parent[node]);
                    q.push(parent[node]);
                }
            }

            dist++;
        }

        return ans;
    }

private:
    void buildParent(TreeNode* node,
                     TreeNode* par,
                     unordered_map<TreeNode*, TreeNode*>& parent) {

        if (!node)
            return;

        parent[node] = par;

        buildParent(node->left, node, parent);
        buildParent(node->right, node, parent);
    }
};