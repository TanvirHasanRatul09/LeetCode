class Solution {
public:
    bool is(TreeNode *l,TreeNode *r){
        if(l==nullptr && r==nullptr)return true;
        if(l==nullptr || r==nullptr)return false;
        if(l->val==r->val){
            return is(l->left,r->right)&&is(l->right,r->left);
        }else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return is(root->left,root->right);
    }
};