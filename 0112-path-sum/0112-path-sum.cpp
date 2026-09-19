class Solution {
public:
     bool dfs(TreeNode* root,int targetSum,stack<int>&st,int currentSum){
        if(!root){
            return false;
        }
        st.push(root->val);
        currentSum+=root->val;
        if(!root->left && !root->right){
            if(currentSum == targetSum){
                st.pop();
                return true;
            }
        }
        if(root->left){
            if(dfs(root->left,targetSum,st,currentSum)){
                st.pop();
                return true;
            }
        }
        if(root->right){
            if(dfs(root->right,targetSum,st,currentSum)){
                st.pop();
                return true;
            }
        }
        st.pop();
        return false;
     }
     bool hasPathSum(TreeNode* root, int targetSum) {
        stack<int>st;
        return dfs(root,targetSum,st,0);
    }
};