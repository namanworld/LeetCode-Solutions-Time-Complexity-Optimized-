class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL) return 0;
        int sum = 0;
        if(root->val>=L&&root->val<=R) sum = root->val;
        
        return sum + rangeSumBST(root->left,L,R) + rangeSumBST(root->right, L, R);
        
        
    }
};
