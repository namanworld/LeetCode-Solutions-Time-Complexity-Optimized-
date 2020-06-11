class Solution {
public:
    int count(TreeNode* root, int currMax){
        if(!root) return 0;
        int ans = 0;
        if(root->val>=currMax){
            ans = 1;
            currMax = root->val;
        }
    return ans + count(root->right, currMax) + count(root->left, currMax);
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return count(root, root->val);
    }
};
