Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum Root to Leaf Numbers.
Memory Usage: 12.4 MB, less than 92.31% of C++ online submissions for Sum Root to Leaf Numbers.

class Solution {
public:
    int helper(TreeNode* root, int val){
        if(!root) return 0;
        val = val*10 + root->val;
        if(!root->left && !root->right) return val;
        return helper(root->left,val)+helper(root->right, val);
    }
    
    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
};
