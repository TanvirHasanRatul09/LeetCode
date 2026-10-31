class Solution {
public:
     bool valid(TreeNode* root, long long minVal, long long maxVal) {

        if(root==nullptr) {
            return true;
        }
        if(root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        bool leftValid = valid(root->left, minVal, root->val);
        bool rightValid = valid(root->right, root->val, maxVal);
        return leftValid && rightValid;
    }
    bool isValidBST(TreeNode* root) {
        return valid(root,LLONG_MIN,LLONG_MAX);
    }
};