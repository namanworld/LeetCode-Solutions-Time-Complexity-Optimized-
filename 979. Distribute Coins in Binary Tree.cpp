class Solution {
public:
    int ans;
    
    int dfs(TreeNode* root){
        if(!root) return 0;
        int L = dfs(root->left);
        int R = dfs(root->right);
        ans += abs(L) + abs(R);
        return root->val + L + R - 1;
    }
    
    int distributeCoins(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};
