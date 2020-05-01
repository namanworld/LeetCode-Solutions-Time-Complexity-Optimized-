Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.

class Solution {
public:
    void preorder(TreeNode *root, vector<int> &v){
        if(!root) return;
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorder(root, v);
        return v;
    }
};
