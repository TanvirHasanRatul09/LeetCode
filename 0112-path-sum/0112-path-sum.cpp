class Solution {
public:

    bool dfs(TreeNode* root, int targetSum, stack<int>& st, int currentSum) {

        if (root == nullptr) {
            return false;
        }

        // Add current node
        st.push(root->val);
        currentSum += root->val;

        // Leaf node
        if (root->left == nullptr && root->right == nullptr) {

            if (currentSum == targetSum) {
                st.pop();
                return true;
            }
        }

        // Left subtree
        if (root->left != nullptr) {
            if (dfs(root->left, targetSum, st, currentSum)) {
                st.pop();
                return true;
            }
        }

        // Right subtree
        if (root->right != nullptr) {
            if (dfs(root->right, targetSum, st, currentSum)) {
                st.pop();
                return true;
            }
        }

        // Backtrack
        st.pop();

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {

        stack<int> st;

        return dfs(root, targetSum, st, 0);
    }
};