class Solution {
public:

    bool dfs(TreeNode* root, int targetSum, stack<int>& st) {

        if (root == nullptr) {
            return false;
        }

        st.push(root->val);

        bool found = false;

        // Leaf node
        if (root->left == nullptr && root->right == nullptr) {

            int sum = 0;
            stack<int> temp = st;

            while (!temp.empty()) {
                sum += temp.top();
                temp.pop();
            }

            if (sum == targetSum) {
                found = true;
            }
        }

        // Left subtree
        if (!found && root->left != nullptr) {
            found = dfs(root->left, targetSum, st);
        }

        // Right subtree
        if (!found && root->right != nullptr) {
            found = dfs(root->right, targetSum, st);
        }

        // Backtrack exactly once
        st.pop();

        return found;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        stack<int> st;
        return dfs(root, targetSum, st);
    }
};