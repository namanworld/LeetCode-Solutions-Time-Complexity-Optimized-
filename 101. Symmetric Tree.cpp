class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return mirror(root, root);
    }
    
    bool mirror(TreeNode* root1, TreeNode* root2){
        if(!root1&&!root2) return true;
        if(!root1||!root2) return false;
        
        return (root1->val==root2->val) && mirror(root1->left, root2->right) && mirror(root1->right, root2->left);
    }
};
