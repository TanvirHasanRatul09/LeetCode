class Solution {
public:
    int ans = INT_MAX;
    int prevVal = 0;
    bool hasPrev = false;

    void inorder(TreeNode* root) {
        if (!root) {
            return;
        }

        inorder(root->left);

        if (hasPrev) {
            ans = min(ans, root->val - prevVal);
        }

        prevVal = root->val;
        hasPrev = true;

        inorder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};