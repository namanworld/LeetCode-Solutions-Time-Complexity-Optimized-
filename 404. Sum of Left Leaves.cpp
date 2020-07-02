class Solution {
public:
    
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        if(root->left && !root->left->left && !root->left->right) {
            sum+=root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};
