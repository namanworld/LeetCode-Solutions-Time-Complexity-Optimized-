class Solution {
public:
    int ans = 0;
    
    int helper(TreeNode* root){
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        ans+=abs(left-right);
        return root->val+left+right;
    }
    
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        helper(root);
        return ans;
    }
};
