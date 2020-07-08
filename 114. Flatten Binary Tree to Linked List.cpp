class Solution {
public:
    TreeNode* helper(TreeNode* root){
        if(!root || (!root->left && !root->right)) return root;
        
        TreeNode* ls = helper(root->left);
        TreeNode* rs = helper(root->right);
        
        if(ls){
            TreeNode* temp = ls;
            while(temp->right){
                temp = temp->right;
            }
            temp->right = rs;
            root->right = ls;
            root->left = NULL;
        }
        return root;
    }
    
    void flatten(TreeNode* root) {
        if(!root) return;
        TreeNode* f = helper(root);
        return;
    }
};
