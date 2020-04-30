class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left) return root ? 1 + minDepth(root->right) : 0;
        if(!root->right) return root ? 1 + minDepth(root->left) : 0;
        
        return root ? 1 + min(minDepth(root->left), minDepth(root->right)) : 0;
    }
};
