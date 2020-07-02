class Solution {
public:
    pair<int, int> diameter(TreeNode* root){
        if(!root){
            pair<int, int> ans;
            ans.first = 0;
            ans.second = 0;
            return ans;
        }
        
        pair<int, int> left = diameter(root->left);
        pair<int, int> right = diameter(root->right);
        
        pair<int, int> ans;
        ans.second = 1+max(left.second, right.second);
        ans.first = max(left.second+right.second, max(left.first, right.first));
        return ans;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        return diameter(root).first;
    }
};
