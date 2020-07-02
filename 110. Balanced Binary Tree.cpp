class Solution {
public:
    pair<int, bool> helper(TreeNode* root){
        if(!root){
            pair<int, bool> ans;
            ans.first = 0;
            ans.second = true;
            return ans;
        }
        pair<int, bool> left = helper(root->left);
        pair<int, bool> right = helper(root->right);
        
        pair<int, int> ans;
        ans.first = 1 + max(left.first, right.first);
        ans.second = left.second && right.second && abs(left.first-right.first)<=1;
        
        return ans;
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return helper(root).second;
    }
};
