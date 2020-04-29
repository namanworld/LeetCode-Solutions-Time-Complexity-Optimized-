TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        
        TreeNode *left = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(left);
        
        return root;
    }
