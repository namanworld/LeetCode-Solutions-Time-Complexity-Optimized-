class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        while((p->val<root->val&&q->val<root->val)||(p->val>root->val&&q->val>root->val)){
            if(p->val<root->val)  root = root->left;
            else root = root->right;
        }
        return root;
    }
};
