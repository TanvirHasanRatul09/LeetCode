class Solution {
public:
    int ans=INT_MIN;
    int dfs(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }

        int left = dfs(root->left);
        int right = dfs(root->right);

        left = max(0, left);
        right = max(0, right);

        int currentPath = left + root->val + right;

        ans = max(ans, currentPath);

        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};