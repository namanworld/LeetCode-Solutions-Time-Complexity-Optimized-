Runtime: 4 ms, faster than 71.62% of C++ online submissions for Leaf-Similar Trees.
Memory Usage: 13.1 MB, less than 88.89% of C++ online submissions for Leaf-Similar Trees.

class Solution {
public:
    
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;
        
        inorder(root->left, v);
        if(!root->left&&!root->right) v.push_back(root->val);
        inorder(root->right, v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        inorder(root1, v1);
        inorder(root2, v2);
        
        if(v1 == v2) return true;
        else return false;
        
    }
};
