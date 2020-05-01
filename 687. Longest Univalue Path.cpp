class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        length(root, ans);
        return ans;
    }
    
    int length(TreeNode* root, int &ans){
        if(!root) return 0;
        
        int left = length(root->left, ans);
        int right = length(root->right, ans);
        
        int leftMax = 0, rightMax = 0;
        if(root->left && root->left->val == root->val) leftMax+=left+1;
        if(root->right && root->right->val == root->val) rightMax+=right+1;
        
        ans = max(ans, leftMax + rightMax);
        return max(leftMax, rightMax);
        
    }
};
