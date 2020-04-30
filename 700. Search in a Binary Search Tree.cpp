class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        
        if(root->val == val) return root;
        
        TreeNode* left = searchBST(root->left, val);
        if(left) return left;
        
        return searchBST(root->right, val);
    }
};
