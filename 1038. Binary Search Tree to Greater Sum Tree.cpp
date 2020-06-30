class Solution {
public:
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(!root) return root;
        root->right = bstToGst(root->right);
        root->val+=sum;
        sum=root->val;
        root->left = bstToGst(root->left);
        return root;
    }
};
