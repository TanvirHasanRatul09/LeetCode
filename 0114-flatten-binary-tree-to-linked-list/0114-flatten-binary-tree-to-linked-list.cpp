class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == NULL)
            return;

        TreeNode* prev = root;

        if (prev->left) {
            flatten(prev->left);
        }

        if (prev->right) {
            flatten(prev->right);
        }

        TreeNode* curr = prev->right;

        prev->right = prev->left;
        prev->left = NULL;

        TreeNode* temp = prev;

        while (temp->right) {
            temp = temp->right;
        }

        temp->right = curr;
    }
};