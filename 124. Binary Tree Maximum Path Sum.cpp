class Solution {
public:
    #include <bits/stdc++.h>
    
    int helper(TreeNode* root, int &ans){
        if(!root) return 0;
        
        int leftAns = helper(root->left, ans);
        int rightAns = helper(root->right, ans);
        
        int maxSum = max(max(leftAns, rightAns)+root->val, root->val);
        
        int maxTop = max(maxSum, leftAns + rightAns + root->val);
        ans = max(ans, maxTop);
        return maxSum;
        
    }
    
    int maxPathSum(TreeNode* root) {

        int ans = INT_MIN;
        helper(root, ans);
        return ans;
    }
};
