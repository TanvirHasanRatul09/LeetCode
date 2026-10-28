class Solution {
public:
    int cnt = 0;
    int ans = 0;
    bool found = false;

    int inorder(TreeNode* root, int k) {
        if (root == nullptr || found) {
            return ans;
        }

        // Left subtree
        inorder(root->left, k);

        if (found) {
            return ans;
        }

        // Visit current node
        cnt++;

        if (cnt == k) {
            ans = root->val;
            found = true;
            return ans;
        }

        // Right subtree
        inorder(root->right, k);
        return ans;
    }

    int kthSmallest(TreeNode* root, int k) {
        cnt = 0;
        found = false;
        return inorder(root, k);
    }
};