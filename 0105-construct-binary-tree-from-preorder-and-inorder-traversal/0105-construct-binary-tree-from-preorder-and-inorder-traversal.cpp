class Solution {
public:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,
                    int& preIndex, int left, int right) {

        if(left > right)
            return NULL;

        int rootValue = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootValue);

        int rootIndex = left;
        while(inorder[rootIndex] != rootValue)
            rootIndex++;

        root->left = build(preorder, inorder,
                           preIndex, left, rootIndex - 1);

        root->right = build(preorder, inorder,
                            preIndex, rootIndex + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        return build(preorder, inorder,
                     preIndex, 0, inorder.size() - 1);
    }
};