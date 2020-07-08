class Solution {
public:
    int ans;
    
    int helper(TreeNode* root){
        if(!root) return 0;
        
        int x = helper(root->left);
        int y = helper(root->right);
        
        ans = max(ans, root->val + x + y);
        
        return max(0, root->val + max(x, y));
    }
    
    int maxPathSum(TreeNode* root) {
        ans = INT_MIN;
        helper(root);
        return ans;
    }
};
