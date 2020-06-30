class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        root->right = convertBST(root->right);
        root->val+=sum;
        sum=root->val;
        root->left = convertBST(root->left);
        return root;
    }
};
