class Solution {
public:
    void dfs(TreeNode *root,int sum,vector<int>&nums){
        if(!root){
            return;
        }
        int digit=root->val;
        sum=sum*10+digit;
        if(!root->left && !root->right){
            nums.push_back(sum);
        }
        dfs(root->left,sum,nums);
        dfs(root->right,sum,nums);
    }
    int sumNumbers(TreeNode* root) {
        vector<int>nums;
        int sum=0;
        dfs(root,sum,nums);
        int total=0;
        for(int n:nums){
            total+=n;
        }
        return total;
    }
};