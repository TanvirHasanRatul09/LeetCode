class Solution {
public:
    TreeNode* construct(vector<int>& inorder,vector<int>&postorder,int &postidx,int l,int r){
        if(l>r)return NULL;

        int value=postorder[postidx];
        postidx--;
        TreeNode* root=new TreeNode(value);
        
        int ridx=l;
        while(inorder[ridx]!=value){
            ridx++;
        }
        root->right=construct(inorder,postorder,postidx,ridx+1,r);
        root->left=construct(inorder,postorder,postidx,l,ridx-1);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postidx=postorder.size()-1;
        return construct(inorder,postorder,postidx,0,inorder.size()-1);
    }
};